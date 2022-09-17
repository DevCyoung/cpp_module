#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon_type) : 
	weapon_type(weapon_type),
	name(name)
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon_type.getType() << std::endl;
}
