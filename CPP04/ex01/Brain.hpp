#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain const & copy);
	~Brain();
	Brain & operator=(Brain const & other);
	std::string getIdea() const;
};

#endif