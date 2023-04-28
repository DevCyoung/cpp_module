#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat :
    public Animal
{

public:
	virtual void makeSound() const;

public:
	Cat();
	Cat(const Cat& _other);
	Cat& operator = (const Cat& _other);
	~Cat();
};

#endif CAT_HPP