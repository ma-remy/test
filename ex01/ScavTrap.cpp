#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name, 50, 100, 20)
{
    std::cout << "ScavTrap " << _Name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _Name << " copy constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << _Name << " copy assignment operator called!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_HitPoints <= 0)
    {
        std::cout << "ScavTrap " << _Name << " is already destroyed and cannot attack!" << std::endl;
        return;
    }
    if (_EnergiePoints <= 0)
    {
        std::cout << "ScavTrap " << _Name << " has no energy to attack!" << std::endl;
        return;
    }
    _EnergiePoints--;
    std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " has entered Gatekeeper mode!" << std::endl;
}