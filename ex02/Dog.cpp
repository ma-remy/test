#include "Dog.hpp"

Dog::Dog()
{
    br = new Brain();
    type = "Dog";
    std::cout << "Dog Constructor called!" << std::endl;
}

Dog::~Dog()
{
    delete br;
    std::cout << "Dog Destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    this->br = new Brain(*other.br);
    std::cout << "Dog Copy Constructor called!" << std::endl; 
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete this->br;
        this->br = new Brain(*other.br);
    }
    std::cout << "Dog Copy Assignment operator called!" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
