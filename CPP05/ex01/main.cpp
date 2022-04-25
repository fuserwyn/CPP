#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Bureaucrat b = Bureaucrat("Volod'ka", 5);
        std::cout << b;
		Form d = Form("Prikaz ", 50, 50);
		std::cout << "Grade for signing: " << d.get_grade_sign() << std:: endl;
		std::cout << "Grade for executing: " << d.get_grade_execute() << std::endl;
		b.increm();
        std::cout << b;
		std::cout << d;
		b.signForm(d);
		std::cout << d;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b = Bureaucrat("Borya", 3);
        std::cout << b;
		Form d = Form("Dich polnaya ", 1, 1);
		std::cout << "Grade for signing: " << d.get_grade_sign() << std:: endl;
		std::cout << "Grade for executing: " << d.get_grade_execute() << std::endl;
		b.increm();
        std::cout << b;
		std::cout << d;
		b.signForm(d);
		std::cout << d;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}