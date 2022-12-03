#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog :
    public Animal
{

private:
	Brain* m_brain;

public:
	virtual void makeSound() const;

public:
	Dog();
	Dog(const Dog& _other);
	Dog& operator = (const Dog& _other);
	~Dog();
};

#endif DOG_HPP