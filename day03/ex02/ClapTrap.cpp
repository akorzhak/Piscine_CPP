#include "ClapTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

ClapTrap::ClapTrap(void): _hitPoints(100), _maxHitPoints(100), _level(1)
{
	srand(time(0));
	std::cout << "ClapTrap is alive" << std::endl;
}

ClapTrap::ClapTrap(std::string const name): _hitPoints(100), _maxHitPoints(100),
		_level(1)
{
	srand(time(0));
	this->_name = name;
	std::cout << "Named ClapTrap is alive" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clapTrap)
{
	srand(time(0));
	std::cout << "Copied ClapTrap is alive" << std::endl;
	*this = clapTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap is dead" << std::endl;
}

/*
****************************** ASSIGNATION OPERATOR OVERLOAD *******************
*/


ClapTrap &		ClapTrap::operator=(ClapTrap const &clapTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_maxHitPoints = clapTrap._maxHitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_maxEnergyPoints = clapTrap._maxEnergyPoints;
	this->_level = clapTrap._level;
	this->_meleeAttackDamage = clapTrap._meleeAttackDamage;
	this->_rangedAttackDamage = clapTrap._rangedAttackDamage;
	this->_armorDamageReduction = clapTrap._armorDamageReduction;

	return *this;
}

/*
****************************** FUNCTIONS ***************************************
*/

void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " at range, causing "
		<< this->getRangedAttackDamage() << " points of damage!" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " at melee, causing "
		<< this->getMeleeAttackDamage() << " points of damage!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();

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

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();

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

/*
****************************** GETTERS *****************************************
*/

std::string		ClapTrap::getName(void)
{
	return this->_name;
}

int				ClapTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int				ClapTrap::getMaxHitPoints(void)
{
	return this->_maxHitPoints;
}

int				ClapTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int				ClapTrap::getMaxEnergyPoints(void)
{
	return this->_maxEnergyPoints;
}

int				ClapTrap::getLevel(void)
{
	return this->_level;
}

int				ClapTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int				ClapTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int				ClapTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}
