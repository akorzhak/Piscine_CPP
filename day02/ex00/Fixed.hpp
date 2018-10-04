#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
		Fixed(Fixed const &fixed);
		~Fixed(void);

		void				setRawBits(int const raw);
		int					getRawBits(void) const;

		Fixed &				operator=(Fixed const &fref);
};

#endif
