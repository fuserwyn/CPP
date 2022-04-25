#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & copy);
	~WrongAnimal();
	WrongAnimal & operator=(WrongAnimal const & copy);
	std::string	getType() const;
	void	makeSound() const;
};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & i);

#endif