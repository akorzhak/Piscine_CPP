#include "FragTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

FragTrap::FragTrap(void): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Constructor with name param called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & fragTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

FragTrap &		FragTrap::operator=(FragTrap const &fragTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = fragTrap.getName();
	this->_hitPoints = fragTrap.getHitPoints();
	this->_maxHitPoints = fragTrap.getMaxHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_maxEnergyPoints = fragTrap.getMaxEnergyPoints();
	this->_level = fragTrap.getLevel();
	this->_meleeAttackDamage = fragTrap.getMeleeAttackDamage();
	this->_rangedAttackDamage = fragTrap.getRangedAttackDamage();
	this->_armorDamageReduction = fragTrap.getArmorDamageReduction()

	return *this;
}

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
	
}