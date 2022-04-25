#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
int main()
{
	std::cout << "----Shrub----" << std::endl;
	std::cout << "Jenya" << std::endl<<std::endl;
    try
    {
        Bureaucrat jenya = Bureaucrat("Jenya", 26);
        std::cout << jenya;
		ShrubberyCreationForm form1("Forma");
		std::cout << form1 << std::endl;
		std::cout << "Form grade:" << form1.get_grade_execute()<< std::endl;
		jenya.signForm(form1);
		form1.execute(jenya);
		std::cout << form1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
	std::cout << "Borya" << std::endl<<std::endl;
	try
	{
		Bureaucrat borya("Borya", 2);
		ShrubberyCreationForm shroom("SHROOM");

		borya.signForm(shroom);
		shroom.execute(borya);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----Robot-----" << std::endl;
	std::cout << "Jenya" << std::endl<<std::endl;
	try
    {
        Bureaucrat jenya = Bureaucrat("Jenya", 26);
        std::cout << jenya;
		RobotomyRequestForm form1("Forma");
		std::cout << form1 << std::endl;
		std::cout << "Form grade:" << form1.get_grade_execute()<< std::endl;
		jenya.signForm(form1);
		form1.execute(jenya);
		std::cout << form1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
		std::cout << "Borya" << std::endl<<std::endl;
	try
	{
		Bureaucrat borya("Borya", 2);
		RobotomyRequestForm shroom("SHROOM");

		borya.signForm(shroom);
		shroom.execute(borya);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
    {
		std::cout << "----Presedent-----" << std::endl;
		std::cout << "Jenya" << std::endl<<std::endl;
        Bureaucrat jenya = Bureaucrat("Jenya", 26);
        std::cout << jenya;
		PresidentialPardonForm form1("Forma");
		std::cout << form1 << std::endl;
		std::cout << "Form grade:" << form1.get_grade_execute()<< std::endl;
		jenya.signForm(form1);
		form1.execute(jenya);
		std::cout << form1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
		std::cout << "Borya" << std::endl<<std::endl;
	try
	{
		Bureaucrat borya("Borya", 2);
		PresidentialPardonForm shroom("SHROOM");

		borya.signForm(shroom);
		shroom.execute(borya);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}