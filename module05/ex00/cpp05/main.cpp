#include "Bureaucrat.h"

int main()
{
	Bureaucrat brc("yoseo", 1);



	try
	{
		brc.increase();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << brc << std::endl;
	
	brc.setGrade(10);
	std::cout << brc << std::endl;

	brc.decrease();
	std::cout << brc << std::endl;

	brc.setGrade(150);
	brc.setGrade(151);

	return 0;
}