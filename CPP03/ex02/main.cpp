#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	FragTrap	alcoholic2("alcoholic2");
	std::cout << alcoholic2 << std::endl;
	alcoholic2.attack("cashier2");
	alcoholic2.takeDamage(5);
	alcoholic2.beRepaired(20);
	std::cout << alcoholic2 << std::endl;
	FragTrap policeman2("policeman2");
	policeman2 = alcoholic2;
	std::cout << "After assignment:" << std::endl;
	std::cout << policeman2 << std::endl;
	policeman2.highFivesGuys();
	std::cout << policeman2 << std::endl;
	alcoholic2.takeDamage(7);
	std::cout << alcoholic2 << std::endl;
	return 0;
}