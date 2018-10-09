#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;

	Form* form1;
	Form* form2;
	Form* form3;
	
	form1 = someRandomIntern.makeForm("robotomy request", "Robot");
	std::cout << "Intern created " << form1->getName()
		<< " form, targeted on " << form1->getTarget() << std::endl;
	form2 = someRandomIntern.makeForm("shrubbery creation", "Home");
	std::cout << "Intern created " << form2->getName()
		<< " form, targeted on " << form2->getTarget() << std::endl;
	form3 = someRandomIntern.makeForm("presidential pardon", "Bill");
	std::cout << "Intern created " << form3->getName()
		<< " form, targeted on " << form3->getTarget() << std::endl;

	delete form1;
	delete form2;
	delete form3;

	return 0;
}
