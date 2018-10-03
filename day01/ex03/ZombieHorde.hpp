#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Zombie.hpp"

/*
****************************** ZOMBIEHORDE CLASS *******************************
*/

class ZombieHorde
{
	private:

		Zombie 	*_zombies;
		int		_zombiesNb;

	public:

		ZombieHorde(int n);
		~ZombieHorde(void);

		std::string	randomChump(void);
		void		announce(void);
};

#endif
