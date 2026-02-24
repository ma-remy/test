#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &Name) : _Name(Name) , _EnergiePoints(10) , _HitPoints(10) , _AttackDamage(0)
{
    std::cout << "ClapTrap " << _Name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    if(this != &other)
    {
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _EnergiePoints = other._EnergiePoints;
        _AttackDamage = other._AttackDamage;
    }
    std::cout << "ClapTrap " << _Name << " copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) 
    {
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _EnergiePoints = other._EnergiePoints;
        _AttackDamage = other._AttackDamage;
    }
    std::cout << "ClapTrap " << _Name << " copy assignment operator called!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << _Name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string &Name)
{
    if (_HitPoints <= 0) 
    {
        std::cout << "ClapTrap " << _Name << " is already destroyed and cannot attack!" << std::endl;
        return;
    }

    if (_EnergiePoints <= 0) 
    {
        std::cout << "ClapTrap " << _Name << " has no energy to attack!" << std::endl;
        return;
    }
    _EnergiePoints--;
    std::cout << "ClapTrap " << _Name << " attacks " << Name << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= 0) 
    {
        std::cout << "ClapTrap " << _Name << " is already destroyed and cannot take more damage!" << std::endl;
        return;
    }

    if (amount >= static_cast<unsigned int>(_HitPoints))
        _HitPoints = 0;
    else
        _HitPoints -= amount;

    std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HitPoints <= 0) 
    {
        std::cout << "ClapTrap " << _Name << " is already destroyed and cannot be repaired!" << std::endl;
        return;
    }

    if (_EnergiePoints <= 0) 
    {
        std::cout << "ClapTrap " << _Name << " has no energy to repair!" << std::endl;
        return;
    }
    _EnergiePoints--;

    _HitPoints += amount;
    
    std::cout << "ClapTrap " << _Name << " is repaired for " << amount << " hit points!" << std::endl;
}
 
const std::string& ClapTrap::getName() const
{
    return _Name;
}