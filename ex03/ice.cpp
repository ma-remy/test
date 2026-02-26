#include "Ice.hpp"

ice::ice(std::string const &type) : AMateria(type) {}
ice::ice() : AMateria("ice") {}

ice::ice(ice const &other) : AMateria(other) {}

ice &ice::operator=(ice const &other)
{
    AMateria::operator=(other);
    return *this;
}

ice::~ice() {}

AMateria *ice::clone() const
{
    return new ice(*this);
}

void ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}



