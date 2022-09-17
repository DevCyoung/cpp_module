#include "Harl.hpp"

Harl::Harl()
{
	voice[0] = &Harl::debug;
	voice[1] = &Harl::info;
	voice[2] = &Harl::warning;
	voice[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void Harl::debug(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-";
	std::cout << "cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::findExistsLevel(std::string level)
{
	for(int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
			return 1;
	}
	return 0;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*voice[i])();
			break ;
		}
	}
}

void Harl::forceComplain(std::string level)
{
	int check = 0;
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			check = 1;
		}
		if (check == 1)
		{
			(this->*voice[i])();
			std::cout << std::endl;
		}
	}
}