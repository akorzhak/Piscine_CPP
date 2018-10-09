#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	//create 2 bureaucrats
	Bureaucrat bill("Bill", 140);
	Bureaucrat steve("Steve", 1);

	//create ShrubberyCreationForm
	ShrubberyCreationForm shrubberyForm("garden");

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

	return 0;
}
