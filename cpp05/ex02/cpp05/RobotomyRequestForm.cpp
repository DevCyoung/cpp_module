#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", "NULL", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target)
    : AForm("RobotomyRequestForm", _target, 72, 45)
{
    std::cout << "RobotomyRequestForm name constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& _other)
    : AForm("RobotomyRequestForm", _other.getTarget(), 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& _other)
{
    std::cout << "RobotomyRequestForm copy assignment operator" << _other.getName() << std::endl;
    return *this;
}



void RobotomyRequestForm::formExecute(const Bureaucrat& _bureaucrat) const
{
    std::cout << "Makes some drilling noises" << std::endl;
    if (rand() % 2 == 0)
    {
        std::cout << getName() << " has been robotomized successfully" << std::endl;
    }        
    else
    {
        std::cout << getName() << "robotomy failed" << std::endl;
    }        
}
