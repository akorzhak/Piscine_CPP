#include "FragTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

FragTrap::FragTrap(void): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	srand(time(0));
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	srand(time(0));
	this->_name = name;
	std::cout << "Constructor with name param called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & fragTrap)
{
	srand(time(0));
	std::cout << "Copy constructor called" << std::endl;
	*this = fragTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
****************************** ASSIGNATION OPERATOR OVERLOAD *******************
*/


FragTrap &		FragTrap::operator=(FragTrap const &fragTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_maxHitPoints = fragTrap._maxHitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_maxEnergyPoints = fragTrap._maxEnergyPoints;
	this->_level = fragTrap._level;
	this->_meleeAttackDamage = fragTrap._meleeAttackDamage;
	this->_rangedAttackDamage = fragTrap._rangedAttackDamage;
	this->_armorDamageReduction = fragTrap._armorDamageReduction;

	return *this;
}

/*
****************************** FUNCTIONS ***************************************
*/

void			FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing "
		<< this->getRangedAttackDamage() << " points of damage!" << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at melee, causing "
		<< this->getMeleeAttackDamage() << " points of damage!" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->getName();

	if (this->_hitPoints == 0)
		std::cout << " is lacking of hit points. You cannot hit him anymore!" << std::endl;
	else if ((int)amount <= this->_armorDamageReduction)
		std::cout << " has a strong armor, so you did not manage to hit him!" << std::endl;
	else
	{
		if ((this->_hitPoints += _armorDamageReduction - amount) < 0)
			this->_hitPoints = 0;
		std::cout << " took a damage of " << amount << " points, so now his hit points are "
			<< this->_hitPoints << "!" << std::endl;
	}
}

void			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->getName();

	if (this->_hitPoints == this->_maxHitPoints)
		std::cout << " do not need to be repaired!" << std::endl;
	else
	{
		if ((this->_hitPoints += + (int)amount) > 100)
			this->_hitPoints = 100;
		std::cout << " is repaired by " << amount << " points, so now his hit points are "
			<< this->_hitPoints << "!" << std::endl;
	}
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int			i = rand() % 5;
	std::string	attack[5] = {"Serious", "Incredible", "Magnificent", "Plain", "Small"};

	std::cout << "FR4G-TP " << this->getName();

	if (this->_energyPoints < 25)
		std::cout << " did not hit " << target << ", since he is lacking of energy points. "
			<< "For random attack 25 energy points are required."
			<< " Only " << this->_energyPoints << "are available!" << std::endl;
	else
	{
		this->_energyPoints -= 25;
		std::cout << " attacks " << target << " at " << attack[i] << ", and has "
			<< this->_energyPoints << " points of energy!" << std::endl;
	}
}

/*
****************************** GETTERS *****************************************
*/

std::string		FragTrap::getName(void)
{
	return this->_name;
}

int				FragTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int				FragTrap::getMaxHitPoints(void)
{
	return this->_maxHitPoints;
}

int				FragTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int				FragTrap::getMaxEnergyPoints(void)
{
	return this->_maxEnergyPoints;
}

int				FragTrap::getLevel(void)
{
	return this->_level;
}

int				FragTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int				FragTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int				FragTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}
