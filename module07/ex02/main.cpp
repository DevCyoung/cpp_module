#include "Array.h"
#include <iostream>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Array<int> array(10);

	for (size_t i = 0; i < 10; i++)
	{
		array[i] = i;
	}

	std::cout << "------------array print-------------" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << array[i] << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;


	Array<int> b2(array);
	for (size_t i = 0; i < 10; i++)
	{
		array[i] = 100;
	}

	std::cout << "------------b2    print-------------" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << b2[i] << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;

	b2 = array;
	std::cout << "b2 = array" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------------b2    print-------------" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << b2[i] << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;

	return 0;
}