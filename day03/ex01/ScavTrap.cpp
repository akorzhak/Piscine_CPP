#include "ScavTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

ScavTrap::ScavTrap(void): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	srand(time(0));
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name): _hitPoints(100), _maxHitPoints(100),
	_energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	srand(time(0));
	this->_name = name;
	std::cout << "ScavTrap Constructor with name param called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scavTrap)
{
	srand(time(0));
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scavTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

/*
****************************** ASSIGNATION OPERATOR OVERLOAD *******************
*/


ScavTrap &		ScavTrap::operator=(ScavTrap const &scavTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_maxHitPoints = scavTrap._maxHitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_maxEnergyPoints = scavTrap._maxEnergyPoints;
	this->_level = scavTrap._level;
	this->_meleeAttackDamage = scavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = scavTrap._rangedAttackDamage;
	this->_armorDamageReduction = scavTrap._armorDamageReduction;

	return *this;
}

/*
****************************** FUNCTIONS ***************************************
*/

void			ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC5G-TP " << this->getName() << " attacks " << target << " at range, causing "
		<< this->getRangedAttackDamage() << " points of damage!" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC5G-TP " << this->getName() << " attacks " << target << " at melee, causing "
		<< this->getMeleeAttackDamage() << " points of damage!" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC5G-TP " << this->getName();

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

void			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC5G-TP " << this->getName();

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

void			ScavTrap::challengeNewcomer(void)
{
	int			i = rand() % 5;
	std::string	challenge[5] = {"Fly", "Don't sleep 24h", 
		"Jump from the roof", "Find a job", "Validate CPP Piscine"};

	std::cout << "SC5G-TP " << this->getName();

	if (this->_energyPoints < 25)
		std::cout << " did not chose a challenge, since he is lacking of energy points. "
			<< "For random attack 25 energy points are required."
			<< " Only " << this->_energyPoints << "are available!" << std::endl;
	else
	{
		this->_energyPoints -= 25;
		std::cout << " chose a challenge " << challenge[i] << ", and has "
			<< this->_energyPoints << " points of energy!" << std::endl;
	}
}

/*
****************************** GETTERS *****************************************
*/

std::string		ScavTrap::getName(void)
{
	return this->_name;
}

int				ScavTrap::getHitPoints(void)
{
	return this->_hitPoints;
}

int				ScavTrap::getMaxHitPoints(void)
{
	return this->_maxHitPoints;
}

int				ScavTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}

int				ScavTrap::getMaxEnergyPoints(void)
{
	return this->_maxEnergyPoints;
}

int				ScavTrap::getLevel(void)
{
	return this->_level;
}

int				ScavTrap::getMeleeAttackDamage(void)
{
	return this->_meleeAttackDamage;
}

int				ScavTrap::getRangedAttackDamage(void)
{
	return this->_rangedAttackDamage;
}

int				ScavTrap::getArmorDamageReduction(void)
{
	return this->_armorDamageReduction;
}
