#include "contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact()
{
	return;
}

void	Contact::assign_index(int a)
{
	if (a >= 0)
		this->i = a;

	return;
}

phonebook::phonebook() : cnt(-1), amount(0), i(0), input(1), start(0), search(0)
{
	return;
}

phonebook::~phonebook()
{
	return;
}

void	phonebook::closer()
{
	exit( 0 );
}

void	phonebook::printer( void )
{
	std::cout << "     Index |";
	std::cout << " First name |";
	std::cout << "  Last name |";
	std::cout << "   Nickname" << std::endl;
	return;
}
