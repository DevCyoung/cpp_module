#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_numbeer;
		std::string darkest_secret;
	public :
	    std::string		get_first_name();
        std::string		get_last_name();
        std::string		get_nick_name();
        std::string		get_phone_number();
        std::string		get_darkest_secret();
		void  			set_first_name();
        void  			set_last_name();
        void  			set_nick_name();
        void  			set_darkest_secret();
        void        	set_phone_number();	
};
#endif
