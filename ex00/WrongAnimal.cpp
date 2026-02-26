#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongAnimal Copy Constructor called!" << std::endl;
}

WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongAnimal Copy Assignment operator called!" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make sound!" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return this->type;
}