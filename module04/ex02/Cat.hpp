#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat :
    public Animal
{

private:
	Brain* m_brain;

public:
	virtual void makeSound() const;

public:
	Cat();
	Cat(const Cat& _other);
	Cat& operator = (const Cat& _other);
	~Cat();
};

#endif CAT_HPP