#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;
class Form
{
	private:
		std::string const name;
		bool is_signed;
		int const grade_sign;
		int const grade_execute;
		Form();
	public:
		Form(std::string name, int grade_sign, int grade_execute);
		~Form();
		Form(Form const & copy);
		Form & operator=(Form const & other);
		void beSigned(Bureaucrat & source);
		std::string get_name()const;
		bool get_is_signed()const;
		int	get_grade_sign()const;
		int get_grade_execute()const;
		virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
    {   
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
	class FormIsNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
std::ostream & operator << (std:: ostream & o, Form const & i);
#endif