#include "Intern.hpp"
Intern::Intern(){}
Intern::Intern(Intern const & copy){(void)copy;}
Intern:: ~Intern(){}
Intern&Intern::operator=(Intern const & other)
{
	(void)other;
	return *this;
}
const char* Intern::FormIsNotCreatedException::what() const throw(){return "Not signed Intern!";}
Form* Intern:: makeForm(std::string name, std::string target)
{
	int i = 0;
	Form* form = NULL;
	std::string forms[3]={"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	while (i < 3 && forms[i] != name)
		i++;
	switch (i)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		break;
	default:
		throw FormIsNotCreatedException();
	}
	return form;
}