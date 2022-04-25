#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(): Form("PPF", 7, 5), target("Pt"){}
PresidentialPardonForm::PresidentialPardonForm(std:: string target): Form("PPF", 7, 5), target(target){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy), target(copy.target){}
PresidentialPardonForm::~PresidentialPardonForm(){}
void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if (!this->get_is_signed())
        throw FormIsNotSignedException();
    else if (this->get_grade_execute() < executor.getGrade())
        throw GradeTooLowException();
    else
        std::cout <<this->target<<"shroom is president"<<std::endl;
}
PresidentialPardonForm & PresidentialPardonForm:: operator=(PresidentialPardonForm const & other)
{
    Form::operator=(other);
    this->target=other.target;
    return *this;
}