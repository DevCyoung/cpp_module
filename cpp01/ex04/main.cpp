#include<iostream>
#include<cstring>
#include<sstream>
#include<fstream>

//std::strstr
static char* ft_strstr(const char *begin, const char *find)
{
	const char *temp;

	temp = begin;
	while (*temp && *find)
	{
		if (*temp != *find)
			return nullptr;
		++temp;
		++find;
	}
	if (*find == '\0')
		return (char *)begin;
	return nullptr;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "argc Error" << std::endl;
		return 1;
	}
	std::ifstream ifs(argv[1]);
	std::string buff;

	if(ifs.is_open())
	{
		std::stringstream ss;
    	ss << ifs.rdbuf();
		buff = ss.str();
	}
	else
	{
		std::cout << "ifs open Error" << std::endl;
		return 1;
	}
	std::string ofsname = argv[1];
	ofsname += ".replace";
	std::ofstream ofs(ofsname);
	char* past = argv[2];
	char* present = argv[3];
	int pastlen = strlen(past);
	int i = 0;

	 while (buff[i] != '\0')
	 {
		 if(ft_strstr(&buff[i], past) != nullptr)
		 {
			 ofs << present;
			 i += pastlen;
		 }
		 else
		 {
			 ofs << buff[i];
			 ++i;
		 }
	 }


	return 0;
}
