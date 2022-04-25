#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain*	ideas;

	public:

		Cat();
		Cat(Cat const & copy);
		~Cat();
		Cat & operator=( Cat const & rhs );
		void	makeSound() const;
		void	printIdea() const;
};



#endif