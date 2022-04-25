#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap{
	protected:

		std::string _name;
		unsigned int			hits;
		unsigned int			energy;
		unsigned int			attackpoint;

	public:
		ClapTrap();
		ClapTrap(const std::string current_name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();
		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap 		&operator=(ClapTrap const &other);

		unsigned int	hitpoints()const;
		unsigned int	energypoints()const;
		unsigned int	attackdamage()const;
		std::string 	name()const;

};
std::ostream &	operator<<(std::ostream & o, ClapTrap const & i );

#endif