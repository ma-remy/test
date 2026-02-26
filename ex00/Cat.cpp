#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Constructor called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy Constructor called!" << std::endl; 
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Cat Copy Assignment operator called!" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
