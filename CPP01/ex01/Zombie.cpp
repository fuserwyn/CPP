#include "Zombie.hpp"

Zombie::Zombie(): name("bro")
{
	std::cout<< this->name<<" born"<< std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout <<this->name<<" died" << std::endl;
	return;
}

void Zombie::announce()
{
	std::cout << this->name<<" BraiiiiiiinnnzzzZ..." <<std:: endl;
}

void Zombie::Name(std::string Name)
{
	this->name = Name;
	std::cout << "give name " << this->name <<std::endl;
}
