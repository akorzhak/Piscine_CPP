#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

/*
****************************** BRAIN CLASS *************************************
*/

class Brain
{

	private:

		std::stringstream	address;

	public:

		Brain(void);
		~Brain(void);

		void				setType(std::string);

		std::string			identify(void);
		std::string	const	&getType(void);
};

#endif
