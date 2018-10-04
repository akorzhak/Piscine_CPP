#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _fractBits);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(n * (1 << _fractBits)));
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void			Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int				Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

int				Fixed::toInt(void) const
{
	return (getRawBits() >> _fractBits);
}

float			Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << _fractBits));
}

Fixed &			Fixed::operator=(Fixed const &fref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPoint = fref.getRawBits();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const &fref)
{
	o << fref.toFloat();
	return o;
}
