#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::cout << "----------------------" << std::endl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout << "----------------------" << std::endl;
	harl.complain("KKKKKKKKKKKKKKK");
	return 0;
}