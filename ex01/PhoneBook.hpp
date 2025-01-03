#ifndef PHONEBOOK_HPP
	# define PHONEBOOK_HPP

	#include <iostream>
	#include <string>
	#include "Contact.hpp"

	class PhoneBook
	{
		private:
			Contact contacts[7];
		public:
			void set_contact_data(int index, std::string number, std::string firstname, std::string lastname)
			{
				contacts[index].set_number(number);
				contacts[index].set_fname(firstname);
				contacts[index].set_lname(lastname);
			}

			void get_contact_data(int index)
			{
				std::cout << contacts[index].get_number() << std::endl;
				std::cout << contacts[index].get_fname() << std::endl;
				std::cout << contacts[index].get_lname() << std::endl;
			}
	};
#endif