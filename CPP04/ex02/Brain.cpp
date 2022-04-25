#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea.";
	return;
}

Brain::Brain(Brain const & copy)
{
	std::cout << "Copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << " called." << std::endl;
	return;
}

Brain & Brain::operator=(Brain const & other)
{
	std::cout << "Assignment Brain operator";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string	Brain::getIdea( void ) const
{
	return this->ideas[50];
}
