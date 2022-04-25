#include "harlFilter.hpp"

harlFilter::harlFilter()
{
	this->array[0] = &harlFilter::debug;
	this->array[1] = &harlFilter::info;
	this->array[2] = &harlFilter::warning;
	this->array[3] = &harlFilter::error;
	this->array[4] = &harlFilter::message;
}

harlFilter::~harlFilter() {}

void harlFilter::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
	std::cout << std::endl;
};

void harlFilter::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	harlFilter::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	harlFilter::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	harlFilter::message( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void harlFilter::complain(std::string level)
{
	int i;
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && levels[i] != level)
		++i;
	switch (i)
	{
		case 0:
			(this->*array[0])();
			(this->*array[1])();
			(this->*array[2])();
			(this->*array[3])();
			break;
		case 1:
			(this->*array[1])();
			(this->*array[2])();
			(this->*array[3])();
			break;
		case 2:
			(this->*array[2])();
			(this->*array[3])();
			break;
		case 3:
			(this->*array[3])();
			break;
		default:
			(this->*array[4])();
			break;
	}
}