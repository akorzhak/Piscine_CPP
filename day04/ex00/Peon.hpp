#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

/*
****************************** PEON CLASS ************************************
*/

class Peon : public Victim
{
	public:

		Peon(std::string name);
		Peon(Peon const & peon);
		~Peon(void);

		Peon &		operator=(Peon const & peon);

		void		getPolymorphed(void) const;
};

#endif
