# include "Form.hpp"

Form::Form(void): _name("nameless"), _signed(false), _signGrade(1), _exeGrade(1) {}

Form::Form(std::string const name, std::string const target, int signGrade, int exeGrade):
	_name(name), _target(target), _signed(false), _signGrade(signGrade), _exeGrade(exeGrade)
{
	if (_signGrade > 150 || _exeGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || exeGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & form): _signGrade(form.getSignGrade()), _exeGrade(form.getExeGrade()),
	_target(form.getTarget())
{
	*this = form;
}

/*
** Destructor
*/

Form::~Form(void){}

Form &		Form::operator=(Form const & form)
{
	this->_signed = form._signed;
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Form const & form)
{
	o << form.getName() << " form, target: " << form.getTarget();
	if (form.getSigned())
		o << ", signed";
	else
		o << ", unsigned";
	o << ", required grade to sign the form: " << form.getSignGrade()
		<< ", to execute: " << form.getExeGrade() << std::endl;
	return o;
}

/*
** Getters
*/

std::string const	Form::getName(void) const
{
	return _name;
}

std::string const	Form::getTarget(void) const
{
	return _target;
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
	return ("Warning: Bureaucrat is illegal to make required action on form. His grade is too high.\n");
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
	return ("Warning: Bureaucrat is illegal to make required action on form. His grade is too low.\n");
}

/*
** Exception. NotSignedFormException.
*/

Form::NotSignedFormException::NotSignedFormException(void){}

Form::NotSignedFormException::NotSignedFormException(Form::NotSignedFormException const & form)
{
	*this = form;
}

Form::NotSignedFormException::~NotSignedFormException(void) throw() {}

Form::NotSignedFormException & Form::NotSignedFormException::operator=(Form::NotSignedFormException const &)
{
	return *this;
}

const char	*Form::NotSignedFormException::what() const throw()
{
	return ("Warning: Bureaucrat is illegal to execute the form. It is not signed.\n");
}
