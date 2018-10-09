#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

/*
****************************** SORCERER CLASS **********************************
*/

class Sorcerer
{
	private:

		std::string		_name;
		std::string 	_title;

		Sorcerer(void);

	public:

		Sorcerer(std::string const name, std::string const title);
		Sorcerer(Sorcerer const & sorcerer);
		~Sorcerer(void);

		std::string		getName(void) const;
		std::string		getTitle(void) const;

		Sorcerer &		operator=(Sorcerer const & sorcerer);

		void 			polymorph(Victim const & victim) const;
};

std::ostream &			operator<<(std::ostream & o, Sorcerer const &sorcerer);

#endif
