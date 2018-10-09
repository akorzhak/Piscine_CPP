#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat bureaucrat_1;
	Bureaucrat bureaucrat_2("Steve", 1);

	std::cout << bureaucrat_1;
	std::cout << bureaucrat_2;

	std::cout << "\nattempt to increment grade...\n";
	try
	{
		bureaucrat_2.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what();
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << "\nattempt to decrement grade 3 times...\n";
	try
	{
		bureaucrat_2.decrementGrade();
		bureaucrat_2.decrementGrade();
		bureaucrat_2.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what();
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}

	std::cout << bureaucrat_2;
	return 0;
}
