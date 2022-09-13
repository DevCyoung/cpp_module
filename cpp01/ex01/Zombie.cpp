#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "create zombie" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << name << " delete zombie" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}