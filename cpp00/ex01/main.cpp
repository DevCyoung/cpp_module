#include "PhoneBook.hpp"

int main(void)
{
    Phonebook pbook;
    std::string str;

    while (true)
    {
        std::getline(std::cin, str);
        if (str.compare("add") == 0)
        {
            pbook.add();
        }
        else if (str.compare("search") == 0)
        {
            pbook.search();
        }
        else if (str.compare("exit") == 0)
        {
            break;
        }
        else
        {
            std::cout << "check your command\n";
            std::cout << "here recommend command\n";
            std::cout << "add, search, exit\n";
        }
    }
    return 0;
}