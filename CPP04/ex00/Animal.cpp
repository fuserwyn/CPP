#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor" << std::endl;
	return;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Copy Animal constructor" << std::endl;
	this->type = copy.type;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal destructor for " << type << " called." << std::endl;
	return;
}

Animal & Animal::operator=(Animal const & other)
{
	std::cout << "Assignment operator";
	if (this != &other)
		type = other.type;
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "Specific sound!" << std::endl;
	return;
}

std::ostream &	operator<<(std::ostream & o, Animal const & i )
{
	o << "Animal" << i.getType() << "." << std::endl;
	return o;
}