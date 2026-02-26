#pragma once 

#include "AMateria.hpp"
#include "ICharacter.hpp"

class cure : public AMateria
{
    public:
        cure(std::string const &type);
        ~cure();
        cure();
        cure(cure const &other);
        cure &operator=(cure const &other);
        AMateria *clone() const;
        void use(ICharacter &target);
};