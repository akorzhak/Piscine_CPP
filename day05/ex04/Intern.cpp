#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern is now alive!" << std::endl;
}

Intern::Intern(Intern const & intern)
{
	*this = intern;
	std::cout << "Intern is now alive!" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern is successfully killed!" << std::endl;
}

Intern & Intern::operator=(Intern const &)
{
	return *this;
}

Form 	*Intern::makeForm(std::string name, std::string target)
{
	if (name == "shrubbery creation")
	{
		std::cout << "Intern creates " << name << " form." << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (name == "robotomy request")
	{
		std::cout << "Intern creates " << name << " form." << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (name == "presidential pardon")
	{
		std::cout << "Intern creates " << name << " form." << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else
	{
		std::cout << "ERROR: no such form: " << name << std::endl;
		return NULL;
	}
}
