#include "Convert.hpp"

/*
** Constructors
*/

Convert::Convert(void){}

Convert::Convert(std::string input)
{
	_strInput = input;
}

Convert::Convert(Convert const & convert)
{
	*this = convert;
}


/*
** Destructor
*/

Convert::~Convert(void){}

/*
** Operators overload
*/

Convert &		Convert::operator=(Convert const & convert)
{
	this->_intVal = convert._intVal;
	this->_floatVal = convert._floatVal;
	this->_doubleVal = convert._doubleVal;
	this->_strInput = convert._strInput;
	return *this;
}

/*
** Member functions
*/

char 			Convert::getChar(void)
{
	return this->_charVal;
}

int 			Convert::getInt(void)
{
	return this->_intVal;
}

float 			Convert::getFloat(void)
{
	return this->_floatVal;
}

double 			Convert::getDouble(void)
{
	return this->_doubleVal;
}

void			Convert::convertValue(void)
{
	std::stringstream str1(_strInput);
	std::stringstream str2(_strInput);
	std::stringstream str3(_strInput);
	std::stringstream str4(_strInput);

	str1 >> _charVal;
	str2 >> _intVal;
	str3 >> _floatVal;
	str4 >> _doubleVal;
}

void			Convert::displayConvertion(void)
{
	std::cout << "char: " << _charVal << std::endl;
	std::cout << "int: " << _intVal << std::endl;
	std::cout << "float: " << _intVal << std::endl;
	std::cout << "double: " << _intVal << std::endl;
}


