#include "PresidentialPardonForm.hpp"

/*
** Constructors
*/

PresidentialPardonForm::PresidentialPardonForm(void): Form("presidential pardon", "target", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
	Form("presidential pardon", target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & robotomy):
	Form(robotomy)	
{
	*this = robotomy;
}


/*
** Destructor
*/

PresidentialPardonForm::~PresidentialPardonForm(void){}

/*
** Operators overload
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & robotomy)
{
	this->_signed = robotomy._signed;
	return *this;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
