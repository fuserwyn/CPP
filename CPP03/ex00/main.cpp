#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	alcoholic("alcoholic");
	std::cout << alcoholic << std::endl;
	alcoholic.attack("cashier");
	alcoholic.takeDamage(10);
	alcoholic.beRepaired(1);
	std::cout << alcoholic << std::endl;
	ClapTrap	policeman("policeman");
	std::cout << std::endl;
	std::cout << policeman << std::endl;
	alcoholic = policeman;
	std::cout << "After assignment:" << std::endl;
	std::cout << alcoholic << std::endl;
	policeman.takeDamage(3);
	std::cout << policeman << std::endl;
	return 0;
}