#pragma once 

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <map>

class MateriaSource : public IMateriaSource
{
    private:
        std::map<std::string, AMateria*> _slots;

    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
