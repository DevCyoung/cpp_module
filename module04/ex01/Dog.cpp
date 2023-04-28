#include "Dog.hpp"



Dog::Dog()
    : Animal("Dog")
    , m_brain(nullptr)
{
    std::cout << "Dog default constructor" << std::endl;
    m_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor constructor" << std::endl;
    if (m_brain != nullptr)
    {
        delete m_brain;
    }
}

Dog& Dog::operator=(const Dog& _other)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    *((Animal*)this) = _other;    
    *m_brain = *_other.m_brain;
    return *this;
}


Dog::Dog(const Dog& _other)
    : Animal("Dog")
    , m_brain(nullptr)
{
    std::cout << "Dog copy constructor" << std::endl;
    m_brain = new Brain(*_other.m_brain);
}

void Dog::makeSound() const
{
    std::cout << getType() << ": " << "woof woof" << std::endl;
}