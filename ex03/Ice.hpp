#pragma once 

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ice : public AMateria
{
    public:
        ice(std::string const &type);
        ~ice();
        ice();
        ice(ice const &other);
        ice &operator=(ice const &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};

