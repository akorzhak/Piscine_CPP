#include "ScavTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap()
{
	std::cout << "ScavTrap Constructor with name param called" << std::endl;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap const & scavTrap): ClapTrap()
{
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
