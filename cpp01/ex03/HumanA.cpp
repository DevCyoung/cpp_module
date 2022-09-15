#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const Weapon& weapon)
{
	this->weapon = weapon;
	this->name = "default";
}

HumanA::~HumanA()
{
}

void HumanA::set_weapon(const Weapon& weapon)
{
	this->weapon = weapon;
}

void HumanA::set_name(const std::string& name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.get_type() << std::endl;
}
