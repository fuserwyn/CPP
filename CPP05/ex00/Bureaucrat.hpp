#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        int grade;
        const std:: string name;
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int _grade);
        Bureaucrat(Bureaucrat const & copy);
        ~Bureaucrat();
    
    Bureaucrat & operator=(Bureaucrat const & other);
    std::string getName()const;
    int         getGrade()const;
    void        increm();
    void        decrem();
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
};
std::ostream & operator <<(std:: ostream & o, Bureaucrat const & i);
#endif