#include "RobotomyRequestForm.hpp"

/*
** Constructors
*/

RobotomyRequestForm::RobotomyRequestForm(void): Form("robotomy request", "target", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const target):
	Form("robotomy request", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robotomy):
	Form(robotomy)	
{
	*this = robotomy;
}


/*
** Destructor
*/

RobotomyRequestForm::~RobotomyRequestForm(void){}

/*
** Operators overload
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & robotomy)
{
	this->_signed = robotomy._signed;
	return *this;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	srand(time(0));

	if (!this->getSigned())
		throw Form::NotSignedFormException();
	else if (executor.getGrade() > this->_exeGrade)
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "Zzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << "It's a failure!" << std::endl;
		this->_executed = true;
	}
}
