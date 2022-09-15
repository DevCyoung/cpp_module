#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <algorithm>

int main()
{
	HumanA humanA;
	Weapon weaponA;
	weaponA.set_type("gun");
	humanA.set_weapon(weaponA);
	humanA.set_name("yoseo");


	HumanA humanB;
	Weapon weaponB;
	weaponB.set_type("sworld");
	humanA.set_weapon(weaponB);
	humanA.set_name("juhylee");

	humanA.attack();
	humanB.attack();
	return 0;
}
