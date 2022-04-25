#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	type = copy.type;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & other)
{
	std::cout << "Assignment Cat operator called.";
	if (this != &other)
		type = other.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "myau!" << std::endl;
	return;
}
