#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T & cont, int value)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); ++it)
	{
		if (*it == value)
			return (it);
	}
	throw (std::logic_error("No any occurence found."));
}

#endif
