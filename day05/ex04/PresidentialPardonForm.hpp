#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

/*
**************************** PRESIDENTIALPARDONFORM CLASS **********************
*/

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const & presidential);
		~PresidentialPardonForm(void);

		void		execute(Bureaucrat const & executor);

		PresidentialPardonForm &		operator=(PresidentialPardonForm const &presidential);
};

#endif
