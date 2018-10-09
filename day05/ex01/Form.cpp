# include "Form.hpp"

/*
** Constructors
*/

Form::Form(void): _name("nameless"), _signed(false), _signGrade(1), _exeGrade(1) {}

Form::Form(std::string const name, int signGrade, int exeGrade): _name(name), _signed(false),
 	_signGrade(signGrade), _exeGrade(exeGrade)
{
	if (_signGrade > 150 || _exeGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || exeGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & form): _signGrade(form.getSignGrade()), _exeGrade(form.getExeGrade())
{
	*this = form;
}

/*
** Destructor
*/

Form::~Form(void){}

/*
** Operators overload
*/

Form &		Form::operator=(Form const & form)
{
	this->_signed = form._signed;
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Form const & form)
{
	o << form.getName() << " form, ";
	if (form.getSigned())
		o << "signed";
	else
		o << "unsigned";
	o << ", required grade to sign the form: " << form.getSignGrade() << std::endl;
	return o;
}

/*
** Getters
*/

std::string const	Form::getName(void) const
{
	return _name;
}

int					Form::getSigned(void) const
{
	return _signed;
}

int					Form::getSignGrade(void) const
{
	return _signGrade;
}

int					Form::getExeGrade(void) const
{
	return _exeGrade;
}

/*
** Member functions
*/

void				Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

/*
** Exception. GradeTooHighException.
*/

Form::GradeTooHighException::GradeTooHighException(void){}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & high)
{
	*this = high;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const &)
{
	return *this;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Warning: Bureaucrat is illegal to sign the form. His grade is too high.\n");
}

/*
** Exception. GradeTooLowException.
*/

Form::GradeTooLowException::GradeTooLowException(void){}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & low)
{
	*this = low;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const &)
{
	return *this;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Warning: Bureaucrat is illegal to sign the form. His grade is too low.\n");
}