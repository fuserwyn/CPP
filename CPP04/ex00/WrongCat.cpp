#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called." << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	type = copy.type;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor for " << type << " called." << std::endl;
	return;
}

WrongCat & WrongCat::operator=(const WrongCat & other)
{
	std::cout << "Assignment WrongCat operator called.";
	if (this != &other)
		type = other.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat meows!" << std::endl;
	return;
}