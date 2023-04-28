#include "WrongCat.hpp"



WrongCat::WrongCat()
    : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& _other)
{
    std::cout << "WrongCat copy assignment operator" << std::endl;
    *((WrongAnimal*)this) = _other;
    return *this;
}

WrongCat::WrongCat(const WrongCat& _other)
    :WrongAnimal("WrongCat")
{
    std::cout << "WrongCat copy constructor" << std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << getType() << ": " << "meow meow" << std::endl;
}