#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal const & copy);
	virtual ~Animal();
	Animal & operator=(Animal const & other);
	std::string	getType() const;
	virtual void	makeSound() const;
};

std::ostream &	operator<<(std::ostream & o, Animal const & i);

#endif
