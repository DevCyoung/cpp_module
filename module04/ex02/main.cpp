#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animal[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			animal[i] = new Cat();
		}
		else
		{
			animal[i] = new Dog();
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		animal[i]->makeSound();
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Cat oriCat;
	Cat copyCay(oriCat);

	Cat assig = oriCat;
	assig = oriCat;

	
	return 0;
}