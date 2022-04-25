#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	ideas = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
	return;
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->type = copy.getType();
	this->ideas = new Brain(*copy.ideas);
	return;
}

Dog::~Dog( void )
{
	delete ideas;
	std::cout << "Dog destructor for " << type << " called." << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & other )
{
	std::cout << "Assignment Dog operator called.";
	if (this != &other)
	{
		this->type = other.type;
		this->ideas = new Brain(*other.ideas);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog barks!" << std::endl;
	return;
}

void	Dog::printIdea( void ) const
{
	std::cout << ideas->getIdea() << std::endl;
}