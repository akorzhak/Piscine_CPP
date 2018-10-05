#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

/*
****************************** FRAGTRAP CLASS **********************************
*/

class FragTrap
{
	private:

		int	_hitPoints;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_level;
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_armorDamageReduction;

		std::string		_name;

	public:

		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & fragTrap);
		~FragTrap(void);

		FragTrap &		operator=(FragTrap const &fragTrap);

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

		void			vaulthunter_dot_exe(std::string const & target);
};

#endif
