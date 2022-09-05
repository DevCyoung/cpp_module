#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
    Contact			contacts[8];
    Contact			my_info;
    size_t			idx;
    size_t			size;
public:
    Phonebook();
    void	add(void);
    void	search(void);
    void	display_contacts(void);
};
#endif