#include "Contact.hpp"

std::string	Contact::get_first_name()
{
	return first_name;
}

std::string Contact::get_last_name()
{
	return last_name;
}

std::string Contact::get_nick_name()
{
	return nick_name;
}

std::string Contact::get_phone_number()
{
	return phone_numbeer;
}

std::string Contact::get_darkest_secret()
{
	return darkest_secret;
}

void	Contact::set_first_name()
{
	std::getline(std::cin, first_name);
}

void	Contact::set_last_name()
{
	std::getline(std::cin, last_name);
	
}

void	Contact::set_nick_name()
{
	std::getline(std::cin, nick_name);
}

void 	Contact::set_darkest_secret()
{
	std::getline(std::cin, darkest_secret);
}

void	Contact::set_phone_number()
{
	std::getline(std::cin, phone_numbeer);
}

