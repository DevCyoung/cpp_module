#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("RobotomyRequestForm", "NULL", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target)
    : AForm("RobotomyRequestForm", _target, 145, 137)
{
    std::cout << "ShrubberyCreationForm name constructor" << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor constructor" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& _other)
    : AForm("ShrubberyCreationForm", _other.getTarget(), 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& _other)
{
    std::cout << "ShrubberyCreationForm copy assignment operator" << _other.getName() << std::endl;
    return *this;
}

void ShrubberyCreationForm::formExecute(const Bureaucrat& _bureaucrat) const
{
    //std::ofstream ofs("<target>_shrubbery");
    std::ofstream ofs;
    ofs.open(getTarget() + "_shrubbery");

    if (ofs.fail())
    {
        std::cerr << "Error!" << std::endl;
        return;
    }
    ofs << "***********  *****    *****" << std::endl;
    ofs << "**********    **       ****" << std::endl;
    ofs << "********                ***" << std::endl;
    ofs << "******                   **" << std::endl;
    ofs << "*********    ******  ******" << std::endl;
    ofs << "*********    ******  ******" << std::endl;
    ofs << "*********    ******  ******" << std::endl;
    ofs << "*********    ******  ******" << std::endl;
    ofs.close();
}