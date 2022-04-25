#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string name);
	FragTrap(ClapTrap const & copy);
	~FragTrap();
	FragTrap &	operator=( FragTrap const & rhs );
	void	    highFivesGuys(void);

};

#endif