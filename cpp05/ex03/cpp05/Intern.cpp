#include "Intern.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"


Intern::Intern()
{
    std::cout << "Intern default constructor" << std::endl;
}

Intern& Intern::operator=(const Intern& _other)
{
    std::cout << "Intern copy assignment operator" << std::endl;
    return *this;
}

Intern::Intern(const Intern& _other)
{
    std::cout << "Intern copy constructor" << std::endl;
}



Intern::~Intern()
{
    std::cout << "Intern destructor constructor" << std::endl;
}


AForm* Intern::makeForm(const std::string& _form, const std::string& _target) const
{
    static const std::string formStrArray[3] = { "robotomy request", "presidential pardon" , "shrubbery creation" };

    AForm* form = nullptr;
    eFORM state = eFORM::NONE;
    int i = 0;

    for (size_t i = 0; i < 3; i++)
    {
        if (formStrArray[i] == _form)
        {
            state = (eFORM)i;
            break;
        }
    }

    switch (state)
    {
    case eFORM::NONE:
        throw Intern::FormInvalidException();
        break;
    case eFORM::PARDON:
        form = new PresidentialPardonForm(_target);
        break;
    case eFORM::ROBOTOMY:
        form = new RobotomyRequestForm(_target);
        break;
    case eFORM::SHRUBBERY:
        form = new ShrubberyCreationForm(_target);
        break;
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}

const char* Intern::FormInvalidException::what() const throw()
{
    return "Exception form invalid";
}
