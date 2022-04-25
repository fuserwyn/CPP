#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie* all;

	all = new Zombie[N];
	while (N > -1)
	{
		all[N].Name(name);
		N--;
	}
	return all;
}
