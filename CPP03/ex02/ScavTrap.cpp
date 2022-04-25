#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default name";
	this->hits = 100;
	this->energy= 50;
	this->attackpoint = 20;
	std::cout << "Default ScavTrap constructor called. " << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string current_name)
{
	this->_name = current_name;
	this->hits = 100;
	this->energy = 50;
	this->attackpoint = 20;
	std::cout << "Parametric ScavTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

ScavTrap::ScavTrap(ClapTrap const & copy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & other)
{
	std::cout << "Assignement ScavTrap operator called. ";
	if (this != &other)
	{
		this->_name = other.name();
		this->hits = other.hitpoints();
		this->energy = other.energypoints();
		this->attackpoint = other.attackdamage();
	}
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is in wife mode." << std::endl;
	return;
}