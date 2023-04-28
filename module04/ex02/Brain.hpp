#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& _other);
	Brain& operator = (const Brain& _other);
	virtual ~Brain();
};

#endif
