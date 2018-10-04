#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

/*
****************************** FIXED CLASS *************************************
*/

class Fixed
{
	private:

		int						_fixedPoint;
		static const int		_fractBits = 8;

	public:

		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &fixed);
		~Fixed(void);

		void					setRawBits(int const raw);
		int						getRawBits(void) const;

		int						toInt(void) const;
		float					toFloat(void) const;

		Fixed &					operator=(Fixed const &fref);

		bool					operator>(Fixed const &fref) const;
		bool					operator<(Fixed const &fref) const;
		bool					operator>=(Fixed const &fref) const;
		bool					operator<=(Fixed const &fref) const;
		bool					operator==(Fixed const &fref) const;
		bool					operator!=(Fixed const &fref) const;

		Fixed					operator+(Fixed const &fref) const;
		Fixed					operator-(Fixed const &fref) const;
		Fixed					operator*(Fixed const &fref) const;
		Fixed					operator/(Fixed const &fref) const;

		Fixed &					operator++(void);
		Fixed					operator++(int);
		Fixed &					operator--(void);
		Fixed					operator--(int);

		static Fixed &			min(Fixed &fref1, Fixed &fref2);
		static const Fixed &	min(Fixed const &fref1, Fixed const &fref2);

		static Fixed &			max(Fixed &fref1, Fixed &fref2);
		static const Fixed &	max(Fixed const &fref1, Fixed const &fref2);
};

std::ostream &					operator<<(std::ostream & o, Fixed const &fref);

#endif
