#include "Harl.hpp"

Harl::Harl()
{
	this->array[0] = &Harl::debug;
	this->array[1] = &Harl::info;
	this->array[2] = &Harl::warning;
	this->array[3] = &Harl::error;
	this->array[4] = &Harl::message;
}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
	std::cout << std::endl;
};

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::message( void )
{
	std::cout << "This is not a complaint." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && levels[i] != level)
		++i;
	std::cout << "[ " << level << " ]" << std::endl;
	(this->*array[i])();

}