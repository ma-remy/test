#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name, 100, 100, 30)
{
    std::cout << "FragTrap " << _Name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _Name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << _Name << " copy assignment operator called!" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _Name << " destructed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_HitPoints <= 0)
    {
        std::cout << "FragTrap " << _Name << " is already destroyed and cannot attack!" << std::endl;
        return;
    }
    if (_EnergiePoints <= 0)
    {
        std::cout << "FragTrap " << _Name << " has no energy to attack!" << std::endl;
        return;
    }
    _EnergiePoints--;
    std::cout << "FragTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _Name << " is requesting a high five!" << std::endl;
}
