#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include "PhoneBook.hpp"

	class Contact{
		private:
			std::string number;
			std::string first_name;
			std::string last_name;
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

			std::string  get_number() {return (number);};
			std::string get_fname() {return (first_name);};
			std::string get_lname() {return (last_name);};
	};

#endif