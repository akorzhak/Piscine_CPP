#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

/*
****************************** CLAPTRAP CLASS **********************************
*/

class ClapTrap
{
	protected:

		int				_hitPoints;
		int				_maxHitPoints;
		int				_energyPoints;
		int				_maxEnergyPoints;
		int				_level;
		int				_meleeAttackDamage;
		int				_rangedAttackDamage;
		int				_armorDamageReduction;

		std::string		_name;

	public:

		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & clapTrap);
		~ClapTrap(void);

		ClapTrap &		operator=(ClapTrap const &clapTrap);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void);
		int				getHitPoints(void);
		int				getMaxHitPoints(void);
		int				getEnergyPoints(void);
		int				getMaxEnergyPoints(void);
		int				getLevel(void);
		int				getMeleeAttackDamage(void);
		int				getRangedAttackDamage(void);
		int				getArmorDamageReduction(void);
};

#endif
