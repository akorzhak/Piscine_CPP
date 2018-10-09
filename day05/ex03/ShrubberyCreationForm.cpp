#include "ShrubberyCreationForm.hpp"

/*
** Constructors
*/

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("shrubbery creation", "target", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):
	Form("shrubbery creation", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery):
	Form(shrubbery)	
{
	*this = shrubbery;
}


/*
** Destructor
*/

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

/*
** Operators overload
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubbery)
{
	this->_signed = shrubbery._signed;
	return *this;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	std::ofstream			oFile;

	if (!this->getSigned())
		throw Form::NotSignedFormException();
	else if (executor.getGrade() > this->_exeGrade)
		throw Form::GradeTooLowException();
	else
	{
		oFile.open(this->_target + "_shrubbery");
		if (oFile.is_open())
		{
			oFile << "          1          " << std::endl;
			oFile << "        /   \\       " << std::endl;
			oFile << "       /     \\      " << std::endl;
			oFile << "      2       4      " << std::endl;
			oFile << "     / \\     / \\   " << std::endl;
			oFile << "    4   5   6   8    " << std::endl;
			oFile << "   /   / \\     / \\ " << std::endl;
			oFile << "  8   9   1   2   3  " << std::endl;
			oFile << "     /               " << std::endl;
			oFile << "    5                " << std::endl;
		}
		oFile.close();
		this->_executed = true;
	}
}
