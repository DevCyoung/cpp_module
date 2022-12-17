#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>


template<typename T>
int easyfind(T& _container, const int _value)
{
	typename T::iterator iter =  std::find(_container.begin(), _container.end(), _value);
	if (iter == _container.end())
	{		
		throw std::invalid_argument("Not found value");
	}
	return *iter;
}

#endif 