#include "Bureaucrat.h"
#include "Form.h"

int main()
{		

	try
	{
		Form failForm("test", 300, 300);

	}
	catch (const std::exception& e)
	{
		std::cerr << "Form fail " << e.what() << std::endl;		
	}

	Form financing("financing", 9, 9);
	Form coffee("coffee", 10, 10);

	Bureaucrat yoseo("yoseo", 10);

	std::cout << financing << std::endl;
	std::cout << coffee << std::endl;
	std::cout << yoseo << std::endl;

	yoseo.signForm(financing);
	yoseo.signForm(coffee);

	std::cout << std::endl;

	yoseo.increase();
	std::cout << yoseo << std::endl;
	yoseo.signForm(financing);
}