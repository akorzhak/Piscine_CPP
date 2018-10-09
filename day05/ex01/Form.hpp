#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

/*
****************************** FORM CLASS **************************************
*/

class Bureaucrat;

class Form
{
	private:

		std::string const	_name;
		bool				_signed;
		int	const			_signGrade;
		int	const			_exeGrade;

	public:

		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & high);
				~GradeTooHighException(void) throw();
				GradeTooHighException & operator=(GradeTooHighException const &);
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & low);
				~GradeTooLowException(void) throw();
				GradeTooLowException & operator=(GradeTooLowException const &);
				virtual const char	*what() const throw();

		};
		
		Form(void);
		Form(std::string const name, int signGrade, int exeGrade);
		Form(Form const & form);
		~Form(void);

		Form &		operator=(Form const & form);

		std::string const	getName(void) const;
		int					getSigned(void) const;
		int					getSignGrade(void) const;
		int					getExeGrade(void) const;

		void				beSigned(Bureaucrat & bureaucrat);
};

std::ostream &				operator<<(std::ostream & o, Form const & form);

#endif
