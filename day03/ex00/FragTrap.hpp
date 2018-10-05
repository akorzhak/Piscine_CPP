#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

/*
****************************** FRAGTRAP CLASS **********************************
*/

class FragTrap
{
	private:

		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

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
		unsigned int	getHitPoints(void);
		unsigned int	getMaxHitPoints(void);
		unsigned int	getEnergyPoints(void);
		unsigned int	getMaxEnergyPoints(void);
		unsigned int	getLevel(void);
		unsigned int	getMeleeAttackDamage(void);
		unsigned int	getRangedAttackDamage(void);
		unsigned int	getArmorDamageReduction(void);
};

#endif
