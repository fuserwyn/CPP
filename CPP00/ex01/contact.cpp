#include "contact.hpp"

void	Contact::contacts( void )
{

	std::cout << "Input first name: ";
	std::cin >> this->firstname;
	std::cout << "Input last name: ";
	std::cin >> this->last_name;
	std::cout << "Input nickname: ";
	std::cin >> this->nick_name;
	std::cout << "Input phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Input darkest secret: ";
	std::cin >> this->darkest_secret;

	return;
}

void	Contact::column( std::string str, int flag )
{
	if (str.length() > 10)
	{
		std::cout << std::setw(9) << str.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
	if (flag == 1)
		std::cout << " | ";

	return;
}

void	Contact::show()
{
	std::cout << std::right << std::setw(10) << this->i << " | ";
	this->column(this->firstname, 1);
	this->column(this->last_name, 1);
	this->column(this->nick_name, 0);
	std::cout << std::endl;

	return;
}

void	Contact::display()
{
	std::cout << "The contact information: " << std::endl;
	std::cout << std::left << std::setw(18) << "First name: " << this->firstname << std::endl;
	std::cout << std::left << std::setw(18) << "Last name: " << this->last_name << std::endl;
	std::cout << std::left << std::setw(18) << "Nickname: " << this->nick_name << std::endl;
	std::cout << std::left << std::setw(18) << "Phone number: " << this->phone_number << std::endl;
	std::cout << std::left << std::setw(18) << "Darkest secret: " << this->darkest_secret<< std::endl;
	return;
}

int	main()
{
	phonebook	phonebook;

	phonebook.starter();

	return 0;
}