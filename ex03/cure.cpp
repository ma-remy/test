#include "Cure.hpp"

cure::cure(std::string const &type) : AMateria(type) {}
cure::cure() : AMateria("cure") {}

cure::cure(cure const &other) : AMateria(other) {}

cure &cure::operator=(cure const &other)
{
    AMateria::operator=(other);
    return *this;
}

cure::~cure() {}

AMateria *cure::clone() const
{
    return new cure(*this);
}

void cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
