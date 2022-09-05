#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_numbeer;
		std::string darkest_secret;
	public :
		Contact();
		~Contact();
	    std::string		get_first_name();
        std::string		get_last_name();
        std::string		get_nicke_name();
        std::string		get_phone_number();
        std::string		get_darkest_secret();
		void  			set_first_name(std::string firstname);
        void  			set_last_name(std::string lastname);
        void  			set_nicke_name(std::string nickename);
        void  			set_darkest_secret(std::string darkestsecret);
        void        	set_phone_number(std::string phonenumber);	
};
#endif