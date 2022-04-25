#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* bro = new Zombie(name);
	return bro;
}
