#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
	void (Harl::*voice[4])(void);
	std::string levels[4];
	std::string str_table[4];
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	void complain(std::string level);
};
#endif
