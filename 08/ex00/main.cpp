#include <vector>
#include <iostream>
#include "easyfind.h"

void find_print_value(std::vector<int>& _vecNum, int _num)
{
	
	try
	{
		int n = easyfind(_vecNum, _num);
		std::cout << "find : " << n << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << " : " << _num << std::endl;

	}
}


int main()
{
	std::vector<int> _vecNum;
	_vecNum.push_back(1);
	_vecNum.push_back(9);
	_vecNum.push_back(13);

	std::cout << "-----------_vecNUm-----------" << std::endl;
	for (size_t i = 0; i < _vecNum.size(); i++)
	{
		std::cout << _vecNum[i] << std::endl;
	}
	std::cout << "----------------------------" << std::endl;

	find_print_value(_vecNum, 2);
	find_print_value(_vecNum, 1);
	
	return 0;
}