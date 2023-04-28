#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :
    public Animal
{
public:
	virtual void makeSound() const;

public:
	Dog();
	Dog(const Dog& _other);
	Dog& operator = (const Dog& _other);
	~Dog();
};

#endif DOG_HPP