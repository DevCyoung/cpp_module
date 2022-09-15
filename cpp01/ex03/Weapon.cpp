#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string weapon_type)
{
	this->weapon_type = weapon_type;
}

void Weapon::set_type(string::type weapon_type)
{
	this->weapon_type = weapon_type;
}

const std::string& Weaon::get_type()
{
	return weapon_type;
}
