#include "iter.h"
#include <iostream>

struct Data
{
	int idx;
};

void func(Data* a)
{
	std::cout << a->idx << std::endl;
}

int main(void)
{
	Data datas[10] = {};

	for (size_t i = 0; i < 10; i++)
	{
		datas[i].idx = i;
	}

	iter(datas, 10, func);
	return 0;
}