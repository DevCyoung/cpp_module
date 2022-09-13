#include <algorithm>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon();
		void set_type(std::string type);
		std::string& get_type();
};
