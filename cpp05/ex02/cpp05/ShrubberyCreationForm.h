#pragma once
#include "AForm.h"
class ShrubberyCreationForm :
    public AForm
{
public:
	virtual void formExecute(const Bureaucrat& _bureaucrat) const;

protected:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string _target);

public:
	ShrubberyCreationForm(const ShrubberyCreationForm& _other);
	ShrubberyCreationForm& operator = (const ShrubberyCreationForm& _other);
	~ShrubberyCreationForm();
};

