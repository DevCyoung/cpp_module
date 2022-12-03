#include "Dog.hpp"



Dog::Dog()
    : Animal("Dog")
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& _other)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    *((Animal*)this) = _other;
    return *this;
}


Dog::Dog(const Dog& _other)
    : Animal("Dog")
{
    std::cout << "Dog copy constructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << getType() << ": " << "woof woof" << std::endl;
}