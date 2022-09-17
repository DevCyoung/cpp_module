#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <algorithm>
#include <iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie();
		~Zombie();
		void announce(void);
		void set_name(std::string name);
};
Zombie* zombieHorde(int N, std::string name);
#endif