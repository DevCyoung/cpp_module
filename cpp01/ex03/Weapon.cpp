#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

void Weapon::set_type(std::string weapon_type)
{
	this->weapon_type = weapon_type;
}

const std::string& Weapon::get_type()
{
	return weapon_type;
}
