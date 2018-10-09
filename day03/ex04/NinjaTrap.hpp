#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

/*
****************************** FRAGTRAP CLASS **********************************
*/

class NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const & fragTrap);
		~NinjaTrap(void);

		void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(NinjaTrap const & target);

		NinjaTrap &		operator=(NinjaTrap const &ninjaTrap);
};

#endif
