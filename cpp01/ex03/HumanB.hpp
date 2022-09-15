#include "Weapon.hpp"

class HumanB
{
private:
	Weapon weapon;
	std::string name;

public:
	HumanB();
	~HumanB();
	void attack();
	void set_weapon(Weapon weapon);
	void set_name(std::string name);
};
