#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
class PresidentialPardonForm: public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const & other);
        void execute(Bureaucrat const & executor) const;
};
#endif