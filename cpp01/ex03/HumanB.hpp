#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* weapon_type;
	std::string name;

public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon_type);
	void attack();
};
#endif