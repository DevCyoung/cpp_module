#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	Cat oriCat;
	Cat copyCat(oriCat);	
	oriCat = copyCat;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will output the Animal sound!	
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongI;

	const WrongCat* wrongJ = new WrongCat();
	wrongJ->makeSound();
	delete wrongJ;

	return 0;
}