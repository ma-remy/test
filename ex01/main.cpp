#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    std::cout << std::endl;
    std::cout << "===== Array of Animals =====" << std::endl;
    const int size = 10;
    Animal* animals[size];

    for (int k = 0; k < size; k++)
    {
        if (k < size / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << std::endl;
    std::cout << "===== Deleting Array =====" << std::endl;
    for (int k = 0; k < size; k++)
        delete animals[k];

    std::cout << std::endl;
    std::cout << "===== Deep Copy Test =====" << std::endl;
    Dog original;
    Dog copy(original);

    return 0;
}