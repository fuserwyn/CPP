#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "default name";
    hits = 10;
    energy = 10;
    attackpoint = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string current_name)
{
    _name = current_name;
    hits = 10;
    energy = 10;
    attackpoint = 0;
	std::cout << "Parametric constructor called " << _name << " created." << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << _name << " called." << std::endl;
	return;
}

std::string		ClapTrap::name() const 
{ 
    return _name;
}

unsigned int	ClapTrap::hitpoints() const 
{
    return hits;
}

unsigned int	ClapTrap::energypoints() const 
{
    return energy;
}

unsigned int	ClapTrap::attackdamage() const
{
    return attackpoint; 
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignement operator called ";
	if (this != &other)
	{
		this->_name = other.name().append("Copy");
		this->hits = other.hitpoints();
		this->energy = other.energypoints();
		this->attackpoint = other.attackdamage();
	}
	return *this;
}

void	ClapTrap::attack(const std::string & target)
{
	if (hits > 0 && energy > 0)
	{
		std::cout << _name << " attacks " << target;
		energy -= 1;
        std::cout << ", he has left " << energy << " beer points!" << std::endl;
	}
	else
	{
		std::cout << _name << " can't attack " << target << " because ";
		std::cout << _name << " has no hit points or energy points left!" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " lost " << amount << " clear mind points. ";
    amount > hits ? hits = 0 : hits -= amount;
    std::cout << _name << " has " << hits << " clear mind points." << std::endl;
    if (hits <= 0)
		std::cout << _name << " is crying" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hits > 0 && energy > 0)
	{
		std::cout << _name << " sobering, + " << amount << " clear mind points. ";
		hits += amount;
		std::cout << _name << " has " << hits << " clear mind points." << std::endl;
	}
	else
		std::cout << _name << " can't sobering "<< std::endl ;
	return;
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & i )
{
	o << i.name() << " has " << i.hitpoints() << " clear mind points, " 
    << i.energypoints() << " beer points, and " << i.attackdamage() << " attack damage. ";
	if (i.hitpoints() > 7)
		o << i.name() << " is a real  danger.";
	else if (i.hitpoints() <= 7)
    {
       o << i.name() << " is stil a real  danger.";
    }
    else 
		o << i.name() << " is sober.";

	return o;
}