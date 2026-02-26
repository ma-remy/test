#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &src)
{
    if(this != &src)
        this->_type = src._type;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
