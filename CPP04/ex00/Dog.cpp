#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	type = copy.type;
	return;
}

Dog::~Dog()
{
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & other)
{
	std::cout << "Assignment Cat operator called.";
	if (this != &other)
		type = other.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "gav!" << std::endl;
	return;
}