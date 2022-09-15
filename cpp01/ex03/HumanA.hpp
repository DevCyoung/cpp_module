#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	std::string name;

public:
	HumanA();
	~HumanA();
	void attack();
	void set_weapon(Weapon weapon);
	void set_name(std::string name);
};
