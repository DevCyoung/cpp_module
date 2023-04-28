#include "Cat.hpp"



Cat::Cat()
    : Animal("Cat")
    , m_brain(nullptr)
{
    std::cout << "Cat default constructor" << std::endl;
    m_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor constructor" << std::endl;
    if (m_brain != nullptr)
    {
        delete m_brain;
    }
}

Cat& Cat::operator=(const Cat& _other)
{
    std::cout << "Cat copy assignment operator" << std::endl;
    *((Animal*)this) = _other;    
    *m_brain = *_other.m_brain;
    return *this;
}

Cat::Cat(const Cat& _other)
    : Animal("Cat")
    , m_brain(nullptr)
{
    std::cout << "Cat copy constructor" << std::endl;
    m_brain = new Brain(*_other.m_brain);
}


void Cat::makeSound() const
{
    std::cout << getType() << ": " << "meow meow" << std::endl;
}