#include "Identify.h"
//
#include <cstdlib>

#include <iostream>

#include "A.h"
#include "B.h"
#include "C.h"

Base* generate(void)
{    
    int r = rand() % 3;
	Base* result = NULL;
	switch (r)
	{
	case 0:		
		result = new A;
		std::cout << "Create A" << std::endl;
		break;
	case 1:
		result = new B;
		std::cout << "Create B" << std::endl;
		break;
	case 2:
		result = new C;
		std::cout << "Create C" << std::endl;
		break;
	}
    return result;
}

void identify(Base* p)
{
	if (NULL != dynamic_cast<A*>(p))
	{
		std::cout << "Ptr identify : A" << std::endl;
	}
	else if (NULL != dynamic_cast<B*>(p))
	{
		std::cout << "Ptr identify : B" << std::endl;
	}
	else if (NULL != dynamic_cast<C*>(p))
	{
		std::cout << "Ptr identify : C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Ref identify : A" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;		
	}	

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Ref identify : B" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;		
	}

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Ref identify : C" << std::endl;
		return;
	}
	catch (std::exception& e)
	{
		(void)e;		
	}
}
