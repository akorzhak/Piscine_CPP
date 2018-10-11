#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
******************************** INTERN CLASS **********************************
*/

class Intern
{
	public:

		Intern(void);
		Intern(Intern const & intern);
		~Intern(void);
		Intern & operator=(Intern const &);

		Form 	*makeForm(std::string name, std::string target);
};

#endif
