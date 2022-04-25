#include "Animal.hpp"

Animal::Animal( )
{
	type = "Animal";
	std::cout << "Animal constructor" << std::endl;
	return;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Copy constructor" << std::endl;
	this->type = copy.getType();
	return;
}

Animal::~Animal()
{
	std::cout << "Destructor for " << type << " called." << std::endl;
	return;
}

Animal & Animal::operator=(Animal const & other)
{
	std::cout << "Assignment operator called.";
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
	std::cout << "Animal makes sound!" << std::endl;
	return;
}

std::ostream &	operator<<(std::ostream & o, Animal const & i )
{
	o << "Animal is " << i.getType() << "." << std::endl;
	return o;
}