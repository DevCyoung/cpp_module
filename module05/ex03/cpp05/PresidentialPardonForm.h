#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"
class PresidentialPardonForm :
    public AForm
{
public:
	virtual void formExecute(const Bureaucrat& _bureaucrat) const;

protected:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string _target);

public:
	PresidentialPardonForm(const PresidentialPardonForm& _other);
	PresidentialPardonForm& operator = (const PresidentialPardonForm& _other);
	~PresidentialPardonForm();
};

#endif