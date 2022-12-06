#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "AForm.h"


int main()
{		
	srand(time(NULL));

	Bureaucrat yoseo("yoseo", 5);
	

	ShrubberyCreationForm shrubbery("shrubbery");
	PresidentialPardonForm pardon("pardon");
	RobotomyRequestForm robotomy("robotomy");

	std::cout << yoseo << std::endl;
	
	yoseo.executeForm(shrubbery);
	yoseo.executeForm(pardon);
	yoseo.executeForm(robotomy);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	yoseo.signForm(shrubbery);
	yoseo.signForm(pardon);
	yoseo.signForm(robotomy);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	yoseo.executeForm(shrubbery);
	yoseo.executeForm(pardon);
	yoseo.executeForm(robotomy);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	yoseo.signForm(shrubbery);
	yoseo.signForm(pardon);
	yoseo.signForm(robotomy);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}