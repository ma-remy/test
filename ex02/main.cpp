#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Construction ===" << std::endl;
    FragTrap a("Ziko");
    FragTrap b("Mery");

    std::cout << "\n=== Attack ===" << std::endl;
    a.attack(b.getName());

    std::cout << "\n=== Take Damage ===" << std::endl;
    b.takeDamage(30);

    std::cout << "\n=== Repair ===" << std::endl;
    b.beRepaired(10);

    std::cout << "\n=== High Fives Guys ===" << std::endl;
    a.highFivesGuys();

    std::cout << "\n=== Copy Constructor ===" << std::endl;
    FragTrap c(a);

    std::cout << "\n=== Copy Assignment ===" << std::endl;
    FragTrap d("Temp");
    d = b;

    std::cout << "\n=== Destruction (reverse order) ===" << std::endl;
    return 0;
}