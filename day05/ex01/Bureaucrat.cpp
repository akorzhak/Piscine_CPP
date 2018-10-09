#include "Bureaucrat.hpp"

/*
** Constructors
*/

Bureaucrat::Bureaucrat(void): _name("nameless"), _grade(150), _maxGrade(1), _minGrade(150) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _maxGrade(1), _minGrade(150)
{
	if (grade > _minGrade)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < _maxGrade)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat): _maxGrade(1), _minGrade(150)
{
	*this = bureaucrat;
}

/*
** Destructor
*/

Bureaucrat::~Bureaucrat(void){}

/*
** Operators overload
*/

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	this->_grade = bureaucrat._grade;
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << " bureaucrat, grade " << bureaucrat.getGrade() << std::endl;
	return o;
}

/*
** Getters
*/

std::string const	Bureaucrat::getName(void) const
{
	return _name;
}

int					Bureaucrat::getGrade(void) const
{
	return _grade;
}

/*
** Member functions
*/

void				Bureaucrat::incrementGrade(void)
{
	if ((_grade - 1) < _maxGrade)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= 1;
}

void				Bureaucrat::decrementGrade(void)
{
	if ((_grade + 1) > _minGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
}

void				Bureaucrat::signForm(Form & form)
{
	if (form.getSigned())
	{
		std::cout << this->_name << " cannot sign " << form.getName()
		<< ". It is already signed." << std::endl;
		return ;
	}
	try
	{	
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << this->_name << " cannot sign " << form.getName()
			<< ". Not enough level. Need: " << form.getSignGrade()
			<< ", Has: " << this->_grade << std::endl;
		std::cout << e.what();
	}
}

/*
** Exception. GradeTooHighException.
*/

Bureaucrat::GradeTooHighException::GradeTooHighException(void){}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & high)
{
	*this = high;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &)
{
	return *this;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Warning: Grade has reached its maximum value. Cannot rise any higher.\n");
}

/*
** Exception. GradeTooLowException.
*/

Bureaucrat::GradeTooLowException::GradeTooLowException(void){}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & low)
{
	*this = low;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &)
{
	return *this;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Warning: Grade has reached its minimum value. Cannot fall any lower.\n");
}
