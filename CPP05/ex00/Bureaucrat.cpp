#include "Bureaucrat.hpp"

Bureaucrat:: Bureaucrat(): name("burik") {return;}
Bureaucrat:: Bureaucrat(std::string _name, int _grade): name(_name)
{
   if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade < 1)
        throw GradeTooHighException();
    else
        grade = _grade;
    return;
}
Bureaucrat:: ~Bureaucrat(){}
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
        grade = grade - 1;
}
void Bureaucrat::decrem()
{
    if (grade == 150)
        throw GradeTooLowException();
    else
        grade = grade + 1;
}
const char* Bureaucrat::GradeTooLowException:: what() const throw() {return "so low grade";}
const char* Bureaucrat::GradeTooHighException:: what() const throw() {return "so high grade";}
std::ostream & operator <<(std:: ostream & o, Bureaucrat const & i)
{
    o <<i.getName()<<" grade "<< i.getGrade()<<std::endl;
    return o;
}