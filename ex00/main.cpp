#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Ziko");
    ClapTrap b("Meryeme");

    std::cout << "---- Attack test ----" << std::endl;
    a.attack(b.getName());

    std::cout << "---- Damage test ----" << std::endl;
    a.takeDamage(5);
    a.takeDamage(10);

    std::cout << "---- Repair test ----" << std::endl;
    a.beRepaired(3);

    std::cout << "---- Energy drain test ----" << std::endl;
    for (int i = 0; i < 12; i++)
        a.attack("Enemy");

    std::cout << "---- Copy test ----" << std::endl;
    ClapTrap c = a;
    ClapTrap d("Temp");
    d = b;

    return 0;
}
