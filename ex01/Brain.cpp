#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor called!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called!" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Copy Constructor called!" << std::endl;
}

Brain&  Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain Copy Assignment operator called!" << std::endl;
    return *this;
}
