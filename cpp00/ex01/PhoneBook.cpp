#include "PhoneBook.hpp"
#include <sstream>

Phonebook::Phonebook()
{
    idx = 0;
    size = 0;
}

static void strwidth(std::string str, size_t width)
{
    size_t i;
    size_t start_idx;

    start_idx = 0;
    for (i = str.length(); i < width; i++)
    {
        std::cout << ' ';
        ++start_idx;
    }
    for (i = 0; i < width - start_idx - 1; i++)
    {
        if (str[i] == '\0')
            break ;
        std::cout << str[i];
    }
    if (str[i] != '\0')
    {
        if (str.length() <= width)
            std::cout << str[i];
        else
            std::cout << '.';
    }
}

static bool is_number(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (std::isdigit(str[i]) == 0)
            return false;
    }
    return true;
}

void    Phonebook::add(void)
{
    if (idx >= 8)
        idx = 0;

    std::cout << "[First Name] : ";
    contacts[idx].set_first_name();
    std::cout << "[Last Name] : ";
    contacts[idx].set_last_name();
    std::cout << "[NickName] : ";
    contacts[idx].set_nick_name();
    std::cout << "[Phone Number] : ";
    contacts[idx].set_phone_number();
    std::cout << "[Darkest Secret] : ";
    contacts[idx].set_darkest_secret();
    ++idx;
}

void    Phonebook::search(void)
{
    std::string snum;
    int         number;

    number = -2;
    strwidth("index", 10);
    std::cout << '|';
    strwidth("First Name", 10);
    std::cout << '|';
    strwidth("Last Name", 10);
    std::cout << '|';
    strwidth("NickName", 10);
    std::cout<< std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::stringstream ssInt;
	    ssInt << i;
        strwidth(ssInt.str(), 10);
        std::cout << '|';
        strwidth(contacts[i].get_first_name(), 10);
        std::cout << '|';
        strwidth(contacts[i].get_last_name(), 10);
        std::cout << '|';
        strwidth(contacts[i].get_nick_name(), 10);
        std::cout<< std::endl;
    }
    std::cout << "select number : ";
    std::getline(std::cin, snum);
    std::cout << "input:|" << snum <<"|" << std::endl;
    if (is_number(snum))
    {
        std::stringstream ssInt(snum);
        ssInt >> number;
    }
    else
    {
        std::cout << "check your select number\n";
        return ;
    }
    if (number < 0 || number >= 8)
    {
        std::cout << number <<": out range! check your select number\n";
        return ;
    }
    std::cout << "[First Name] : " << contacts[number].get_first_name() << std::endl;
    std::cout << "[Last Name] : " << contacts[number].get_last_name() << std::endl;
    std::cout << "[NickName] : " << contacts[number].get_nick_name() << std::endl;
    std::cout << "[Phone Number] : " << contacts[number].get_phone_number() << std::endl;
    std::cout << "[Darkest Secret] : " << contacts[number].get_darkest_secret() << std::endl;
}