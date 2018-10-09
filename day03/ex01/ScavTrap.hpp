#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

/*
****************************** SCAVTRAP CLASS **********************************
*/

class ScavTrap
{
	private:

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

		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & scavTrap);
		~ScavTrap(void);

		ScavTrap &		operator=(ScavTrap const &scavTrap);

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

		void			challengeNewcomer(void);
};

#endif
