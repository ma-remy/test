#include "Character.hpp"

Character::Character(std::string Name) : _Name(Name)
{
    for (int i = 0; i < 4; i++)
        _slots[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _slots[i];
    for (size_t i = 0; i < left.size(); i++)
    {
        delete left[i];
    }
    
}

std::string const & Character::getName() const
{
    return _Name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(_slots[i] == NULL)
        {
            _slots[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx < 4 && idx >= 0)
    {
        left.insert(left.begin()+left.size(), _slots[idx]);
        _slots[idx] = NULL; 
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4){
        if (_slots[idx] != NULL)
            _slots[idx]->use(target);
    }
}
