#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy Constructor called!" << std::endl; 
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "WrongCat Copy Assignment operator called!" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
