#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat :
    public WrongAnimal
{

public:
	void makeSound() const;

public:
	WrongCat();
	WrongCat(const WrongCat& _other);
	WrongCat& operator = (const WrongCat& _other);
	~WrongCat();
};

#endif CAT_HPP