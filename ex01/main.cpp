#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Construction ===" << std::endl;
    ScavTrap a("Ziko");
    ScavTrap b("Mery");

    std::cout << "\n=== Attack ===" << std::endl;
    a.attack(b.getName());

    std::cout << "\n=== Take Damage ===" << std::endl;
    b.takeDamage(30);

    std::cout << "\n=== Repair ===" << std::endl;
    b.beRepaired(10);

    std::cout << "\n=== Guard Gate ===" << std::endl;
    a.guardGate();

    std::cout << "\n=== Copy Constructor ===" << std::endl;
    ScavTrap c(a);

    std::cout << "\n=== Copy Assignment ===" << std::endl;
    ScavTrap d("Temp");
    d = b;

    std::cout << "\n=== Destruction (reverse order) ===" << std::endl;
    return 0;
}