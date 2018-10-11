#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

/*
**************************** ROBOTOMYREQUESTFORM CLASS *************************
*/

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const & robotomy);
		~RobotomyRequestForm(void);

		void		execute(Bureaucrat const & executor);

		RobotomyRequestForm &		operator=(RobotomyRequestForm const &robotomy);
};

#endif
