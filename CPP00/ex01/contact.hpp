#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:

	std::string	firstname;
	std::string	last_name;
	std::string	nick_name;
	std::string phone_number;
	std::string darkest_secret;
	int 		i;
	void		column(std::string str, int flag);

public:

	Contact(void);
	~Contact(void);

	void	assign_index(int v);
	void	contacts(void);
	void	show(void);
	void	display(void);
};

class phonebook
{
private:

	int			cnt;
	int			amount;
	Contact		contacts[8];
	int 		i;
	std::string	arg;
	std::string userinput;
	int 		result;
	int 		input;
	int 		start;
	int 		search;

public:

	phonebook();
	~phonebook();

	void	starter();
	void	add();
	void	searcher();
	void	closer();
	void	index();
	void	printer();
	void 	argschooser();
};

#endif