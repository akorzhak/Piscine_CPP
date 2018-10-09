#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	//create 2 bureaucrats
	Bureaucrat bill("Bill", 140);
	Bureaucrat steve("Steve", 1);

	//create ShrubberyCreationForm
	ShrubberyCreationForm shrubberyForm("home");

	std::cout << bill;
	std::cout << steve;

	std::cout << shrubberyForm;

	//bureacrat try to execute unsigned form
	steve.executeForm(shrubberyForm);

	////bureacrat try to sign form
	bill.signForm(shrubberyForm);
	steve.signForm(shrubberyForm);

	bill.executeForm(shrubberyForm);
	steve.executeForm(shrubberyForm);

	//-------------------------------
	std::cout << std::endl;

	//create RobotomyRequestForm
	RobotomyRequestForm robotomyForm("robot");

	std::cout << robotomyForm;

	////bureacrat try to sign form
	bill.signForm(robotomyForm);
	steve.signForm(robotomyForm);

	bill.executeForm(robotomyForm);
	steve.executeForm(robotomyForm);

	//-------------------------------
	std::cout << std::endl;
	
	//create PresidentialPardonForm
	PresidentialPardonForm pardonForm("Bill");

	std::cout << pardonForm;
	steve.signForm(pardonForm);
	steve.executeForm(pardonForm);

	return 0;
}
