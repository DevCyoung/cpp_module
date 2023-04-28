#include "WrongAnimal.hpp"



WrongAnimal::WrongAnimal(const std::string& _type)
	: m_type(_type)
{
	std::cout << "WrongAnimal type constructor" << std::endl;
}

WrongAnimal::WrongAnimal()
	: m_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor constructor" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& _other)
{
	std::cout << "WrongAnimal copy assignment operator" << std::endl;
	m_type = _other.m_type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& _other)
	: m_type("WrongAnimal")
{
	std::cout << "WrongAnimal copy constructor" << std::endl;	
}

void WrongAnimal::makeSound() const
{
	std::cout << getType() << ": " << "WrongAnimal say" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return m_type;
}
