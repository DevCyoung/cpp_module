#include "whatever.h"
#include <iostream>

struct num
{
	int id;
	int value;

public:
	bool operator >= (const num& _num) const;
};

bool num::operator >= (const num& _num) const
{
	if (this->value >= _num.value)
	{
		return true;
	}
	return false;
}

int main()
{
	num n1 = { 1, 10 };
	num n2 = { 2, 10 };
	num n3 = min(n1, n2);

	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;

}

