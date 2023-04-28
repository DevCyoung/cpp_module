#ifndef INTERN_H
#define INTERN_H

#include <iostream>

class AForm;

enum class eFORM
{	
	ROBOTOMY,
	PARDON,
	SHRUBBERY,	
	NONE,
};

class Intern
{
public:
	AForm* makeForm(const std::string& _form, const std::string& _target) const;

public:
	Intern();
	Intern(const Intern& _other);
	Intern& operator = (const Intern& _other);
	~Intern();

	class FormInvalidException
		: public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif

