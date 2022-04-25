#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b = Bureaucrat("Jenya", 2);
        std::cout << b;
        b.increm();
		std::cout << b;
		b.increm();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat a = Bureaucrat("Petrovich", 149);
        std::cout << a;
        a.decrem();
		std::cout << a;
		a.decrem();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}