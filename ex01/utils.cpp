#include "PhoneBook.hpp"

int valid_number(std::string str)
{
	for(int i = 0; str.c_str()[i]; i++)
	{
		if (!isdigit(str.c_str()[i]))
			return (1);
	}
	return (0);
}

void print_data(PhoneBook data)
{
	std::cout << "-------------------------------------------\n";
	for(int index = 0; index < 8; index++)
	{
		data.get_contact_data(index, false);
		std::cout << "-------------------------------------------\n";
	}
}

void print_string(std::string str, int start, int end)
{
	while (start <= end)
	{
		std::cout << str[start];
		start++;
	}
}