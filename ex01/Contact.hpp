#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include "PhoneBook.hpp"

	class Contact{
		private:
			std::string number;
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string darkest_secreret;
		public:
			void set_number(std::string phonenumber)
			{
				number = phonenumber;
			}
			void set_fname(std::string fname)
			{
				first_name = fname;
			}
			void set_lname(std::string lname)
			{
				last_name = lname;
			}
			void set_nickname(std::string nick)
			{
				nickname = nick;
			}
			void set_secreret(std::string d_secreret)
			{
				darkest_secreret = d_secreret;
			}

			std::string  get_number() {return (number);};
			std::string get_fname() {return (first_name);};
			std::string get_lname() {return (last_name);};
			std::string get_secreret() {return (darkest_secreret);};
			std::string get_nickname() {return (nickname);};
	};

#endif