#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *chump = new Zombie();
	chump->set_name(name);
	chump->announce();
	delete chump;
}
