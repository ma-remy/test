#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "AAnimal Constructor called!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    this->type = other.type;
    std::cout << "AAnimal Copy Constructor called!" << std::endl;
}

AAnimal&  AAnimal::operator=(const AAnimal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "AAnimal Copy Assignment operator called!" << std::endl;
    return *this;
}

const std::string& AAnimal::getType() const
{
    return this->type;
}