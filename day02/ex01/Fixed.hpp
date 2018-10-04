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

		int					_fixedPoint;
		static const int	_fractBits = 8;

	public:

		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &fixed);
		~Fixed(void);

		void				setRawBits(int const raw);
		int					getRawBits(void) const;

		int					toInt(void) const;
		float				toFloat(void) const;

		Fixed &				operator=(Fixed const &fref);
};

std::ostream &				operator<<(std::ostream & o, Fixed const &fref);

#endif
