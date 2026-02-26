#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <vector>
 
class Character : public ICharacter
{
    private:
        AMateria* _slots[4];
        std::string _Name;
        std::vector<AMateria* > left;

public:
    Character(std::string Name);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

