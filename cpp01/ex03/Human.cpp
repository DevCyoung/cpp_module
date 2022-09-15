#include "Human.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA()
{
}

void HumanA::set_weapon(Weapon weapon)
{
	this->weapon = weapon;
}

void HumanA::set_name(std::string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.get_type() << std::endl;
}
