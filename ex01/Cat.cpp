#include "Cat.hpp"

Cat::Cat()
{
    br = new Brain();
    type = "Cat";
    std::cout << "Cat Constructor called!" << std::endl;
}

Cat::~Cat()
{
    delete br;
    std::cout << "Cat Destructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->br = new Brain(*other.br);
    std::cout << "Cat Copy Constructor called!" << std::endl; 
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete this->br;
        this->br = new Brain(*other.br);
    }
    std::cout << "Cat Copy Assignment operator called!" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
