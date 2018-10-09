#include "SuperTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(std::string const name): FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap Constructor with name param called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_name = name;
}

SuperTrap::SuperTrap(SuperTrap const & superTrap): FragTrap(superTrap), NinjaTrap(superTrap)
{
	std::cout << "SuperTrap Copy constructor called" << std::endl;
	*this = superTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap Destructor called" << std::endl;
}

void	ninjaShoebox(FragTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	ninjaShoebox(ScavTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void	ninjaShoebox(NinjaTrap const & target)
{
	NinjaTrap::ninjaShoebox(target);
}

void			vaulthunter_dot_exe(std::string const & target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

SuperTrap &		SuperTrap::operator=(superTrap const &superTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = superTrap._name;
	this->_hitPoints = superTrap._hitPoints;
	this->_maxHitPoints = superTrap._maxHitPoints;
	this->_energyPoints = superTrap._energyPoints;
	this->_maxEnergyPoints = superTrap._maxEnergyPoints;
	this->_level = superTrap._level;
	this->_meleeAttackDamage = superTrap._meleeAttackDamage;
	this->_rangedAttackDamage = superTrap._rangedAttackDamage;
	this->_armorDamageReduction = superTrap._armorDamageReduction;

	return *this;
}
