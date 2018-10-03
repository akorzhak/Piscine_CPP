#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Zombie.hpp"

/*
****************************** ZOMBIEEVENT CLASS *******************************
*/

class ZombieEvent
{
	private:

		std::string	_type;

	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump(void);

		std::string	getZombieType(void);
};

#endif
