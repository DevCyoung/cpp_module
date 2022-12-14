#include "Identify.h"
#include <iostream>
#include <ctime>

int main()
{
	
	srand((unsigned int)time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		Base* base = generate();
		identify(base);
		identify(*base);
		delete base;


		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	

	
	return 0;
}