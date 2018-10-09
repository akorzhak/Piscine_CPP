#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	//create 2 bureaucrats
	Bureaucrat bill("Bill", 130);
	Bureaucrat steve("Steve", 1);

	//create 2 forms
	Form statute("statute", 1, 1);
	Form jobContract("job contract", 140, 140);

	std::cout << bill;
	std::cout << steve;

	std::cout << statute;
	std::cout << jobContract;

	//bureacrats try to sign forms
	bill.signForm(statute);
	bill.signForm(jobContract);

	steve.signForm(statute);
	steve.signForm(jobContract);

	return 0;
}
