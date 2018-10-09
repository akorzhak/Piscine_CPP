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
	protected:

		std::string const	_name;
		std::string const	_target;
		bool				_signed;
		bool				_executed;
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

		class NotSignedFormException : public std::exception
		{
			public:

				NotSignedFormException(void);
				NotSignedFormException(NotSignedFormException const & low);
				~NotSignedFormException(void) throw();
				NotSignedFormException & operator=(NotSignedFormException const &);
				virtual const char	*what() const throw();

		};
		
		Form(void);
		Form(std::string const name, std::string const target, int signGrade, int exeGrade);
		Form(Form const & form);
		~Form(void);

		Form &		operator=(Form const & form);

		std::string const	getName(void) const;
		std::string const	getTarget(void) const;
		int					getSigned(void) const;
		int					getSignGrade(void) const;
		int					getExeGrade(void) const;

		void				beSigned(Bureaucrat & bureaucrat);
		virtual void		execute(Bureaucrat const & executor) = 0;
};

std::ostream &				operator<<(std::ostream & o, Form const & form);

#endif
