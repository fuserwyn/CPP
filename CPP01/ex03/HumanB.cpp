#include "HumanB.hpp"

HumanB::HumanB( std::string name) : name(name), weapon(NULL){}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapons" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
	return;
}
