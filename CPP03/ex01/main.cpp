#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	alcoholic("alcoholic");
	std::cout << alcoholic << std::endl;
	alcoholic.attack("cashier");
	alcoholic.takeDamage(10);
	alcoholic.beRepaired(25);
	alcoholic.takeDamage(35);
	alcoholic.guardGate();
	std::cout << alcoholic << std::endl;
	ScavTrap	policeman("policeman");
	std::cout << std::endl;
	std::cout << policeman << std::endl;
	alcoholic = policeman;
	std::cout << "After assignment:" << std::endl;
	std::cout << alcoholic << std::endl;
	policeman.takeDamage(3);
	policeman.guardGate();
	policeman.takeDamage(77);
	std::cout << policeman << std::endl;
	policeman.guardGate();
	return 0;
}