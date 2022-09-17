#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string level;

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	level = argv[1];
	if (harl.findExistsLevel(level) == 0)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	harl.forceComplain(level);
	return 0;

}
