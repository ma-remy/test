#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _Name;
        int _EnergiePoints;
        int _HitPoints;
        int _AttackDamage;
    public:
        ClapTrap(const std::string &Name, const int EnergiePts, const int HitPts, const int AttackDmg) ;
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        const std::string& getName() const;

};
