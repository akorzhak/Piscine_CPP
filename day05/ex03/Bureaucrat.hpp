#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

/*
****************************** BUREAUCRAT CLASS ********************************
*/

class Form;

class Bureaucrat
{
	private:

		std::string const	_name;
		int					_grade;
		int const			_maxGrade;
		int const			_minGrade;

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
		
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & bureaucrat);
		~Bureaucrat(void);

		Bureaucrat &		operator=(Bureaucrat const & bureaucrat);

		std::string const	getName(void) const;
		int					getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(Form & form);
		void				executeForm(Form & form);
};

std::ostream &				operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif
