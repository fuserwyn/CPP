#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(): Form("RRF", 7, 7), target("Rt"){}
RobotomyRequestForm::RobotomyRequestForm(std:: string target): Form("RRF", 7, 7), target(target){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): Form(copy), target(copy.target){}
RobotomyRequestForm::~RobotomyRequestForm(){}
void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if (!this->get_is_signed())
        throw FormIsNotSignedException();
    else if (this->get_grade_execute() < executor.getGrade())
        throw GradeTooLowException();
    else
		std::cout <<  "Drrrrrrrrr.... Trrrrrrr... Wjjjjjjjj..." << std::endl;
    	std::srand(time(NULL));
    	if ((std::rand() % 2) == 0)
    	{
       		std::cout <<  "Target ";
        	std::cout << " successfully robotomized."  << std::endl;
    	}
    	else
    	{
       		std::cout <<  "Target ";
        	std::cout <<  " robotomy failed." << std::endl;
    	}
}
RobotomyRequestForm & RobotomyRequestForm:: operator=(RobotomyRequestForm const & other)
{
    Form::operator=(other);
    this->target=other.target;
    return *this;
}