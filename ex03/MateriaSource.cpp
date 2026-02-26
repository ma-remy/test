#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
    std::map<std::string, AMateria*>::iterator it;
    for (it = _slots.begin(); it != _slots.end(); ++it)
        delete it->second;
}

void MateriaSource::learnMateria(AMateria* m){
    if(_slots.size() != 4)
    {
        std::pair<std::string, AMateria*> tmp(m->getType(), m);
        _slots.insert(tmp);
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    std::map<std::string, AMateria *>::iterator t; 
    t = _slots.find(type);
    if (t != _slots.end())
        return t->second->clone();
    return 0;
}