#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Constructor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy Constructor called!" << std::endl; 
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Dog Copy Assignment operator called!" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
