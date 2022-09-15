#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << name << ": AhhhhhhhhhhhhhhhH..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
