#include "Animal.hpp"



Animal::Animal(const std::string& _type)
	: m_type(_type)
{
	std::cout << "Animal type constructor" << std::endl;
}

Animal::Animal()
	: m_type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor constructor" << std::endl;
}


Animal& Animal::operator=(const Animal& _other)
{
	std::cout << "Animal copy assignment operator" << std::endl;
	m_type = _other.m_type;
	return *this;
}

Animal::Animal(const Animal& _other)
	:m_type("Animal")
{
	std::cout << "Animal copy constructor" << std::endl;
}

const std::string& Animal::getType() const
{
	return m_type;
}
