#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	std::string name;

public:
	HumanA(const Weapon& weapon);
	~HumanA();
	void attack();
	void set_weapon(const Weapon& weapon);
	void set_name(const std::string& name);
};
#endif
