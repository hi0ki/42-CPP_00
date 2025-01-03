#include "PhoneBook.hpp"

void read_data(PhoneBook &data, int index)
{
	std::string number;
	std::string first_name;
	std::string last_name;

	std::cout << "enter your data:" << std::endl;
	std::cout << "First Name: ";
	getline(std::cin, first_name);
	std::cout << "Last Name: ";
	getline(std::cin, last_name);
	std::cout << "Phone Number: ";
	getline(std::cin, number);

	data.set_contact_data(index, number, first_name, last_name);
	data.get_contact_data(index);
}


int main()
{
	PhoneBook data;
	std::string line;
	int index = 0;

	while (1)
	{
		getline(std::cin, line);
		if (!strcmp(line.c_str(), "ADD") && index < 8)
		{
			read_data(data , index);
			index++;
		}
		if (index == 8)
			break ;
		if (!strcmp(line.c_str(), "EXIT"))
			break ;
	}
	for (int i = 0; i < 2; i++)
	{
		data.get_contact_data(i);
	}
}