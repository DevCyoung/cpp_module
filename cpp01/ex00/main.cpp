#include "Zombie.hpp"

int main(void)
{
	Zombie yoseo;
	yoseo.set_name("yoseo");
	yoseo.announce();

	Zombie *youngjae = newZombie("youngjae");
	youngjae->announce();
	delete youngjae;

	randomChump("Chump");
	return 0;
}
