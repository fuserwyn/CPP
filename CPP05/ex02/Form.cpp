#include "Form.hpp"

Form:: Form(std::string name, int grade_sign, int grade_execute): name(name),is_signed(false), grade_sign(grade_sign), grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
	return;
}
Form:: ~Form(){}
Form:: Form(Form const & copy): name(copy.name), grade_sign(copy.grade_sign), grade_execute(copy.grade_execute){}
Form & Form:: operator=(Form const & other)
 {
	 is_signed = other.get_is_signed();
	 return *this;
 }
void Form:: beSigned(Bureaucrat & source)
{
	if (source.getGrade() > this->grade_sign)
		throw GradeTooLowException();
	else
		is_signed = true;
}
std::string Form:: get_name()const{return this->name;}
int Form:: get_grade_execute()const{return this->grade_execute;}
int Form:: get_grade_sign()const{return this->grade_sign;}
bool Form:: get_is_signed()const{return this->is_signed;}
const char* Form::GradeTooHighException::what() const throw(){return " high grade ";}
const char* Form::GradeTooLowException::what() const throw(){return " low grade ";}
const char *Form::FormIsNotSignedException::what() const throw(){return "Form isn't signed! ";}
std::ostream &	operator<<(std::ostream & o, Form const & i )
{
	o << "Form: " << i.get_name();
	if (!i.get_is_signed())
		o << " isn't signed! "<<std::endl;
	else
		o << " is signed!"<<std::endl;;
	return o;
}