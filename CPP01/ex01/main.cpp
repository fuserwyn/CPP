#include "Zombie.hpp"

int main()
{
	int N;
	int i;
	int a;

	i = 0;
	std::cout << "Input Zombie quantity: ";
	std::cin >> N;
	a = N - 1;
	Zombie		first;
	Zombie* 	all = first.zombieHorde(a, "bro");
	while (i <= a)
	{
		all[i].announce();
		i++;
	}
	delete[]all;
	return 0;
}
