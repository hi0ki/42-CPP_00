#ifndef PHONEBOOK_HPP
	# define PHONEBOOK_HPP

	#include <iostream>
	#include <string>
	#include "Contact.hpp"

	void print_string(std::string str, int start, int end);
	class PhoneBook
	{
		private:
			Contact contacts[8];
		public:
			void set_contact_data(int index, std::string number, std::string firstname, std::string lastname , std::string nickname, std::string secret)
			{
				contacts[index].set_number(number);
				contacts[index].set_fname(firstname);
				contacts[index].set_lname(lastname);
				contacts[index].set_nickname(nickname);
				contacts[index].set_secreret(secret);
			}

			int get_contact_data(int index , bool helper)
			{
				if (contacts[index].get_fname().empty() && index == 0)
				{
    				std::cout << "No data available. Try 'ADD'." << std::endl;
					return (1);
				}
				else if (contacts[index].get_fname().empty())
					return (1);
				std::cout << " " << index;
				std::cout << " | ";
				if (contacts[index].get_fname().length() > 9)
				{
					print_string(contacts[index].get_fname(), 0, 8);
					std::cout << ".";
				}
				else
					std::cout << contacts[index].get_fname();
				std::cout << " | ";
				if (contacts[index].get_lname().length() > 9)
				{
					print_string(contacts[index].get_lname(), 0, 8);
					std::cout << ".";
				}
				else
					std::cout << contacts[index].get_lname();
				std::cout << " | ";
				if (contacts[index].get_nickname().length() > 9)
				{
					print_string(contacts[index].get_nickname(), 0, 8);
					std::cout << ".";
				}
				else
					std::cout << contacts[index].get_nickname();
				if (helper == true)
				{
					std::cout << " | ";
					std::cout << contacts[index].get_number();
					std::cout << " | ";
					if (contacts[index].get_secreret().length() > 9)
					{
						print_string(contacts[index].get_secreret(), 0, 8);
						std::cout << ".";
					}
					else
						std::cout << contacts[index].get_secreret();
				}
				std::cout << " | " << std::endl;
				return (0);
			}

	};

	int valid_number(std::string str);
	void print_data(PhoneBook data);
	void add_data(PhoneBook &data, int index);
	void search_for_data(PhoneBook data);

#endif