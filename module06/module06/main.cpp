#include <iostream>
#include "TypeCast.h"
#include "struct.h"

int main(void)
{
	Data data[2];

	data[0].id = 12;
	data[0].duration = 20.f;

	data[1].id = 100;
	data[1].duration = 40.f;

	uintptr_t ptr = serialize(data);
	ptr += sizeof(Data);

	Data* dataPtr = deserialize(ptr);
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Data 1 info" << std::endl;
	std::cout << "id : " << dataPtr->id << std::endl;
	std::cout << "durtaion : " << dataPtr->duration << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	return 0;
}