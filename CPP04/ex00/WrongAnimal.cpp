#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	type = copy.type;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor for " << type << " called." << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other)
{
	std::cout << "Assignment WrongAnimal operator called.";
	if (this != &other)
		type = other.type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a specific sound!" << std::endl;
	return;
}

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << "My type is " << i.getType() << "." << std::endl;
	return o;
}