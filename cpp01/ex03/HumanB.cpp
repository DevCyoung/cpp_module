#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
}

HumanB::HumanB()
{
}

void HumanB::set_weapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanB::set_name(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.get_type() << std::endl;
}
