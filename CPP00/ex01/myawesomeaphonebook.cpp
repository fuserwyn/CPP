#include "contact.hpp"

void	phonebook::add(void)
{
	this->start = 0;
	this->cnt = (this->cnt + 1) % 8;
	if (this->amount < this->cnt)
		this->amount = this->cnt;
	this->contacts[this->cnt].assign_index( this->cnt + 1);
	this->contacts[this->cnt].contacts();

	return;
}

void	phonebook::searcher( void )
{
	this->start = 0;
	this->i = 0;
	if (this->cnt == -1)
		std::cout << "No one is here" << std::endl;
	else
	{
		this->search = 1;
		this->printer();
		while (this->i <= this->amount)
		{
			this->contacts[this->i].show();
			this->i += 1;
		}
		std::cout << "index: ";
		this->index();
	}
	return;
}

void	phonebook::index( void )
{
	while (this->search == 1)
	{

		this->input = 1;
		std::cin >> this->userinput;
		for(size_t i = 0; i < this->userinput.length(); i++)
		{
			if (this->userinput.at(i) != '0' && this->userinput.at(i) != '1'
				&& this->userinput.at(i) != '2' && this->userinput.at(i) != '3'
				&& this->userinput.at(i) != '4' && this->userinput.at(i) != '5'
				&& this->userinput.at(i) != '6' && this->userinput.at(i) != '7'
				&& this->userinput.at(i) != '8' && this->userinput.at(i) != '9')
			{
				this->input = 0;
				std::cout << "Wrong input";
				std::cout << this->amount + 1 << ": ";
				std::cin.ignore(32767, '\n');
				break;
			}
		}
		if (this->input == 1)
		{
			this->result = atoi(this->userinput.c_str());
			std::cin.ignore(32767, '\n');
			if (this->result < 1 || this->result > this->amount + 1)
			{
				this->input = 0;
				std::cout << "out of range ";
				std::cout << this->amount + 1 << ": ";
				this->index();
			}
			else{

				this->input = 0;
				this->contacts[this->result - 1].display();
				this->search = 0;
				return;
			}
		}
	}
	return;
}

//void phonebook::argschooser()
//{
//	if (this->arg == "ADD")
//		this->add();
//	else if (this->arg== "SEARCH")
//		this->searcher();
//	else if (this->arg == "EXIT")
//		this->closer();
//}

void	phonebook::starter( void )
{
	std::cout << std::right  << std::setw(1) << "My Awesome PhoneBook" << std::endl;
	while ( 1 )
	{
		if (!this->start && !this->search)
		{
			std::cout << "Hey, yo!\nplease choose args: ADD, SEARCH or EXIT ";
			std::cin >> this->arg;
		}
		if (this->arg == "ADD")
			this->add();
		else if (this->arg== "SEARCH")
			this->searcher();
		else if (this->arg == "EXIT")
			this->closer();
		else
		{
			std::cout << "NO!\nNO!\nNO!\nAvailable only ADD, SEARCH or EXIT: ";
			std::cin >> this->arg;
			this->start = 1;
		}
	}
}