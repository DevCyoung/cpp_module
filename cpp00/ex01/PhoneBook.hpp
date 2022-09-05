#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
    private:
        Contact			contacts[8];
		Contact			my_info;
        size_t			current;
        size_t			index;
    public:
        Phonebook();
        ~Phonebook(){};
        void	ft_add();
        void	ft_search();
		void	ft_display_contacts();
};
#endif