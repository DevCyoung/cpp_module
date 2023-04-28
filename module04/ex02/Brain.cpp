#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& _other)
{
    std::cout << "Brain copy assignment operator" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        ideas[i] = _other.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain& _other)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = _other;
}




