#include "Cat.hpp"



Cat::Cat()
    : Animal("Cat")
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& _other)
{
    std::cout << "Cat copy assignment operator" << std::endl;
    *((Animal*)this) = _other;
    return *this;
}

Cat::Cat(const Cat& _other)
    : Animal("Cat")
{
    std::cout << "Cat copy constructor" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << getType() << ": " << "meow meow" << std::endl;
}