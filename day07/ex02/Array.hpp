#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:

		unsigned int	_len;
		T 				*_arr;

	public:
		
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const &array);
		~Array<T>(void);

		Array<T> &		operator=(Array<T> const & array);
		T &				operator[](unsigned int i);

		unsigned int	size(void) const;
};

#endif
