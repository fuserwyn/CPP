#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain*	ideas;

	public:

		Dog();
		Dog(Dog const & copy);
		~Dog();
		Dog & operator=(Dog const & other);
		void	makeSound() const;
		void	printIdea() const;
};



#endif