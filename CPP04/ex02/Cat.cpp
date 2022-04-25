#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	ideas = new Brain();
	std::cout << "Cat constructor" << std::endl;
	return;
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor" << std::endl;
	this->type = copy.getType();
	this->ideas = new Brain(*copy.ideas);
	
	return;
}

Cat::~Cat()
{
	delete ideas;
	std::cout << "Cat destructor for " << type << " called." << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & other)
{
	std::cout << "Assignment Cat operator";
	if (this != &other)
	{
		this->type = other.type;
		this->ideas = new Brain(*other.ideas);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
	return;
}

void	Cat::printIdea() const
{
	std::cout << ideas->getIdea() << std::endl;
}