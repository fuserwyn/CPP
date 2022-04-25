#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
int main()
{
    Intern inter;
    Form* form = NULL;
    Bureaucrat jenya = Bureaucrat("Jenya", 5);
    Bureaucrat petrovich = Bureaucrat("Petrovich", 1);
    std::cout << jenya << std::endl;
	std::cout << petrovich << std::endl;
    try
    {
		std::cout << "----SHRUB----" << std::endl;
		form = inter.makeForm("ShrubberyCreationForm", "target");
		std::cout << *form << std::endl;
		form->beSigned(petrovich);
        form->execute(petrovich);
        std::cout << *form << std::endl;
        delete form;
    }
    catch(const std::exception& e)
    {
        if (form)
            delete form;
        std::cerr << e.what() << std::endl;
    }
    try
    {
		std::cout << "----ROBOT----" << std::endl;
		form = inter.makeForm("RobotomyRequestForm", "target");
		std::cout << *form << std::endl;
		form->beSigned(jenya);
        form->execute(petrovich);
		std::cout << *form << std::endl;
		petrovich.executeForm(*form);
		std::cout << *form << std::endl;
        delete form;
    }
    catch(const std::exception& e)
    {
        if (form)
            delete form;
        std::cerr << e.what() << std::endl;
    }
	try
    {
		std::cout << "----PRESIDENTAL----" << std::endl;
		form = inter.makeForm("PresidentialPardonForm", "target");
		std::cout << *form << std::endl;
		form->beSigned(jenya);
        std::cout << *form << std::endl;
        form->execute(petrovich);
        std::cout << *form << std::endl;
        delete form;
    }
    catch(const std::exception& e)
    {
        if (form)
            delete form;
        std::cerr << e.what() << std::endl;
    }
}