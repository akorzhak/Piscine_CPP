#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
# include "Form.hpp"

/*
**************************** SHRUBBERYCREATIONFORM CLASS ***********************
*/

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery);
		~ShrubberyCreationForm(void);

		void		execute(Bureaucrat const & executor);

		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const &shrubbery);
};

#endif
