#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : 
	name(name)
{
}

void HumanB::setWeapon(Weapon& weapon_type)
{
	this->weapon_type = &weapon_type;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon_type->getType() << std::endl;
}
