#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(): Form("PPF", 25, 5), target("RPF"){}
PresidentialPardonForm::PresidentialPardonForm(std:: string target): Form("PPF", 25, 5), target(target){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy), target(copy.target){}
PresidentialPardonForm::~PresidentialPardonForm(){}
void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if (!this->get_is_signed())
        throw FormIsNotSignedException();
    else if (this->get_grade_execute() < executor.getGrade())
        throw GradeTooLowException();
    else
        std::cout <<this->target<<" is mind president"<<std::endl<< std::endl;
}
PresidentialPardonForm & PresidentialPardonForm:: operator=(PresidentialPardonForm const & other)
{
    Form::operator=(other);
    this->target=other.target;
    return *this;
}