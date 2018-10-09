#include "FragTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string const name): ClapTrap()
{
	std::cout << "FragTrap Constructor with name param called" << std::endl;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const & fragTrap): ClapTrap()
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

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
