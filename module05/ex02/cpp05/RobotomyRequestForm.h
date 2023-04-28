#pragma once
#include "AForm.h"
class RobotomyRequestForm :
    public AForm
{
public:
	virtual void formExecute(const Bureaucrat& _bureaucrat) const;

protected:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(const std::string _target);

public:
	RobotomyRequestForm(const RobotomyRequestForm& _other);
	RobotomyRequestForm& operator = (const RobotomyRequestForm& _other);
	~RobotomyRequestForm();
};

