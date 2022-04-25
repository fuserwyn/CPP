#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie();

		void 	announce();
		Zombie* zombieHorde(int N, std::string name);
		void 	Name(std::string name);
};

#endif
