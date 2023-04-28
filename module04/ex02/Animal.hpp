#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

protected:
	std::string m_type;

public:
	virtual void makeSound() const = 0;
	const std::string& getType() const;

protected:
	Animal(const std::string& _type);
public:
	Animal();
	Animal(const Animal& _other);
	Animal& operator = (const Animal& _other);
	virtual ~Animal();
};

#endif
