#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <algorithm>

int main()
{
	Weapon weaponA;
	weaponA.set_type("gun");
	HumanA humanA(weaponA);
	humanA.set_name("yoseo");


	Weapon weaponB;
	HumanB humanB;
	weaponB.set_type("sworld");
	humanB.set_weapon(weaponB);
	humanB.set_name("juhylee");

	humanA.attack();
	humanB.attack();
	return 0;
}
