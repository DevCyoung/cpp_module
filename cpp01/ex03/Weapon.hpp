#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
		std::string weapon_type;
	public :
		Weapon(const std::string& weapon_type);
		void setType(const std::string& weapon_type);
		const std::string& getType();
};
#endif
