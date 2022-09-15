#include <algorithm>
#include<iostream>
#include<fstream>

int main(int argc, char** argv)
{
	std::ifstream file(argv[1]);
	std::string str;

	if (file.is_open())
	{
		while (file)
		{
			std::string temp;
			getline(file, temp);
			str += temp;
			if (file)
				str += "\n";
		}
	}
	else
	{
		std::cout << "Error" << std::endl;
		return 0;
	}
	std::cout << str;

	return 0;
}
