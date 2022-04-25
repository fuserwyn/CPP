#include "Zombie.hpp"

int main()
{
	Zombie first("bro");
	first.announce();
	Zombie* second = first.newZombie("brother");
	second->announce();
	first.randomChump("brat");
	delete(second);
	return 0;
}
