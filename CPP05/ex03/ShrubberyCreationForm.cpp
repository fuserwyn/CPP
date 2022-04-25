#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(): Form("SCF", 4, 5), target("Pt"){}
ShrubberyCreationForm::ShrubberyCreationForm(std:: string target): Form("SCF", 4, 5), target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy): Form(copy), target(copy.target){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm & ShrubberyCreationForm:: operator=(ShrubberyCreationForm const & other)
{
    Form::operator=(other);
    this->target=other.target;
    return *this;
}
void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
	std::ofstream o;
	if (!this-> get_is_signed())
		throw FormIsNotSignedException();
	else if (this->get_grade_execute() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		o.open((this->target + "SHROOM").c_str());
		if (!o.is_open())
		{
			std::cerr << "open error!" << std::endl;
			return;
		}
		else
		{
			o <<"         .8. "<<  			std::endl;
         	o <<"		  888 "<<  			std::endl;
         	o <<"	      888l"<<  			std::endl;
            o <<"        j8888."<< 			std::endl;
       		o <<"	    .888888."<<			std::endl;
     		o <<"	   .88888888."<<		std::endl;
            o <<"    .d8888888888b."<<		std::endl;
            o <<"   .d88888888888888b."<<   std::endl;
            o <<" .888888888888888888b."<<	std::endl;
            o <<".888888888888888888888"<<	std::endl;
            o <<"8888888888888888888888"<<	std::endl;
            o <<"888P""""""""""""""4888"<<	std::endl;
            o <<"  `P'     .    .     `q'"<<std::endl;
            o <<" `-..____:  :____..-'   "<< std::endl;
            o <<"         :  :          " << std::endl;
            o <<"         :  :          " << std::endl;
            o <<"         :  :          " << std::endl;
            o <<"         :  :          " << std::endl;
            o <<"         :  :          " << std::endl;
            o <<"         (/\\) mh    " << std::endl;     
		}
		o.close();
	}
	return;
}