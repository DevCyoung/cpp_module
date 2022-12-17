#include <iostream>
#include "Span.h"
#include <ctime>

int main()
{
	srand(time(NULL));

	Span span(10);
	span.randFill(10000);
	span.printDiffInfo();

	try
	{
		std::cout << "longest  Span : " << span.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest Span : " << span.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	Span span2(10);
	span.randFill(10000);
	span.printDiffInfo();

	try
	{
		std::cout << "add  number : " << std::endl;
		span.addNumber(10);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;

	}

	return 0;
}