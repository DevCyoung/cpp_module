#include <iostream>

class Weapon
{
	private :
		std::string weapon_type;
	public :
		Weapon();
		~Weapon();
		void set_type(std::string weapon_type);
		const std::string& get_type();
};
