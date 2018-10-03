#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

/*
****************************** ZOMBIE CLASS ************************************
*/

class Zombie
{
	private:

		std::string	_name;
		std::string	_type;

	public:

		Zombie(void);
		~Zombie(void);

		void		setName(std::string name);
		void		setType(std::string type);

		std::string	getName(void);
		std::string	getType(void);

		void		announce(void);
};

#endif
