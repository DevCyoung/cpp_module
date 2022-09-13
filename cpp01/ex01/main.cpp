#include "Zombie.hpp"
#include <unistd.h>

int main(void)
{
	int num = 10;
	Zombie* zombies = zombieHorde(num, "hello");
	for	(int i = 0; i < num; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	system("leaks Moar_brainz");
	return 0;
}