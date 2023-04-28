#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{

protected:
	std::string m_type;

public:
	void makeSound() const;
	const std::string& getType() const;

protected:
	WrongAnimal(const std::string& _type);
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& _other);
	WrongAnimal& operator = (const WrongAnimal& _other);
	virtual ~WrongAnimal();
};

#endif
