#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void Weapon::set_type(string::type type)
{
	this->type = type;
}

std::string& get_type()
{
	return type;
}