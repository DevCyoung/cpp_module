#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", "NULL", 145, 137)
{
    std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target)
    : AForm("PresidentialPardonForm", _target, 145, 137)
{
    std::cout << "PresidentialPardonForm name constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& _other)
    : AForm("PresidentialPardonForm", _other.getTarget(), 145, 137)
{
    std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& _other)
{
    std::cout << "RobotomyRequestForm copy assignment operator" << _other.getName() << std::endl;
    return *this;
}


void PresidentialPardonForm::formExecute(const Bureaucrat& _bureaucrat) const
{
    std::cout << getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}