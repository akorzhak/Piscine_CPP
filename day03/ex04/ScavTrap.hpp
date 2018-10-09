#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

/*
****************************** SCAVTRAP CLASS **********************************
*/

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & scavTrap);
		~ScavTrap(void);

		void			challengeNewcomer(void);

		ScavTrap &		operator=(ScavTrap const &scavTrap);
};

#endif
