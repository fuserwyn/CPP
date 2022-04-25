#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << this->name << " born"<<std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died"<<std::endl;
}



