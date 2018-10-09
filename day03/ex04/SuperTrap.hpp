#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

/*
****************************** SUPERTRAP CLASS **********************************
*/

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:

		SuperTrap(void);
    	SuperTrap(std::string const name);
		SuperTrap(SuperTrap const & src);
    	~SuperTrap(void);

    	void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(NinjaTrap const & target);

		void			vaulthunter_dot_exe(std::string const & target);

    	SuperTrap &		operator=(SuperTrap const &superTrap);

};

#endif
