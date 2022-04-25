#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat:: Bureaucrat(): name("burik") {return;}
Bureaucrat:: Bureaucrat(std::string name, int grade): name(name)
{
   if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
       this->grade = grade;
    return;
}
Bureaucrat:: ~Bureaucrat(){}
Bureaucrat:: Bureaucrat(Bureaucrat const & copy): grade(copy.grade) {return;}
std::string Bureaucrat::getName()const{return this->name;}
int Bureaucrat:: getGrade()const{return this->grade;}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const  & other)
{
    grade = other.getGrade();
    return *this;
}
void Bureaucrat::increm()
{
    if (grade == 1)
        throw GradeTooHighException();
    else
       this->grade = grade - 1;
}
void Bureaucrat::decrem()
{
    if (grade == 150)
        throw GradeTooLowException();
    else
        this->grade = grade + 1;
}
const char* Bureaucrat::GradeTooLowException:: what() const throw() {return " low grade";}
const char* Bureaucrat::GradeTooHighException:: what() const throw() {return " high grade";}
std::ostream & operator <<(std:: ostream & o, Bureaucrat const & i)
{
    o <<i.getName()<<" grade "<< i.getGrade()<<std::endl;
    return o;
}
void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name<< " couldn't sign " << form << "because " << this->name << " has " << e.what() << std::endl;
	}
}
void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " couldn't execute " << form << ", because " << this->name << " has " << e.what() << std::endl;
	}
}