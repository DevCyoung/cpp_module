#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon& weapon_type;
	std::string name;

public:
	HumanA(const std::string& name, Weapon& weapon_type);
	void attack();
};
#endif
