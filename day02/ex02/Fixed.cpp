#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPoint(0)
{}

Fixed::Fixed(int const n)
{
	setRawBits(n << _fractBits);
}

Fixed::Fixed(float const n)
{
	setRawBits(roundf(n * (1 << _fractBits)));
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::~Fixed(void)
{}

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
	this->_fixedPoint = fref.getRawBits();

	return *this;
}

bool			Fixed::operator>(Fixed const &fref) const
{
	return (this->_fixedPoint > fref.getRawBits());
}

bool			Fixed::operator<(Fixed const &fref) const
{
	return (this->_fixedPoint < fref.getRawBits());
}

bool			Fixed::operator>=(Fixed const &fref) const
{
	return (this->_fixedPoint >= fref.getRawBits());
}

bool			Fixed::operator<=(Fixed const &fref) const
{
	return (this->_fixedPoint <= fref.getRawBits());
}

bool			Fixed::operator==(Fixed const &fref) const
{
	return (this->_fixedPoint == fref.getRawBits());
}

bool			Fixed::operator!=(Fixed const &fref) const
{
	return (this->_fixedPoint != fref.getRawBits());
}

Fixed			Fixed::operator+(Fixed const &fref) const
{
	return (Fixed(this->toFloat() + fref.toFloat()));
}

Fixed			Fixed::operator-(Fixed const &fref) const
{
	return (Fixed(this->toFloat() - fref.toFloat()));
}

Fixed			Fixed::operator*(Fixed const &fref) const
{
	return (Fixed(this->toFloat() * fref.toFloat()));
}

Fixed			Fixed::operator/(Fixed const &fref) const
{
	return (Fixed(this->toFloat() / fref.toFloat()));
}

Fixed &					Fixed::operator++(void)
{
	this->_fixedPoint++;
	return (*this);
}

Fixed					Fixed::operator++(int)
{
	Fixed fixed(*this);
	this->_fixedPoint++;

	return fixed;
}

Fixed &					Fixed::operator--(void)
{
	this->_fixedPoint--;
	return (*this);
}

Fixed					Fixed::operator--(int)
{
	Fixed fixed(*this);
	this->_fixedPoint--;
	
	return fixed;
}

Fixed &			Fixed::min(Fixed &fref1, Fixed &fref2)
{
	if (fref1.getRawBits() <= fref2.getRawBits())
		return fref1;
	return fref2;
}

const Fixed &	Fixed::min(Fixed const &fref1, Fixed const &fref2)
{
	if (fref1.getRawBits() <= fref2.getRawBits())
		return fref1;
	return fref2;
}

Fixed &			Fixed::max(Fixed &fref1, Fixed &fref2)
{
	if (fref1.getRawBits() >= fref2.getRawBits())
		return fref1;
	return fref2;
}

const Fixed &	Fixed::max(Fixed const &fref1, Fixed const &fref2)
{
	if (fref1.getRawBits() >= fref2.getRawBits())
		return fref1;
	return fref2;
}

std::ostream &	operator<<(std::ostream & o, Fixed const &fref)
{
	o << fref.toFloat();
	return o;
}
