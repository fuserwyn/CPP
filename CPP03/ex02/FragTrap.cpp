#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_name = "default name";
	this->hits = 100;
	this->energy = 100;
	this->attackpoint = 30;
	std::cout << "Default FragTrap constructor called. " << std::endl;
	return;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->hits = 100;
	this->energy = 100;
	this->attackpoint = 30;
	std::cout << "Parametric FragTrap constructor called. " << this->_name << " created." << std::endl;
	return;
}

FragTrap::FragTrap(ClapTrap const & copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor for " << this->_name << " called." << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & other )
{
	std::cout << "Assignement FragTrap operator called. ";
	if (this != &other)
	{
		this->_name = other.name();
		this->hits = other.hitpoints();
		this->energy = other.energypoints();
		this->attackpoint = other.attackdamage();
	}
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " says high fives." << std::endl;
	return;
}