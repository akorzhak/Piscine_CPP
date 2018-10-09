#include "NinjaTrap.hpp"

/*
****************************** CONSTRUCTORS ************************************
*/

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	std::cout << "NinjaTrap Default constructor called" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap()
{
	std::cout << "NinjaTrap Constructor with name param called" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	this->_name = name;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ninjaTrap): ClapTrap()
{
	std::cout << "NinjaTrap Copy constructor called" << std::endl;
	*this = ninjaTrap;
}

/*
****************************** DESTRUCTOR **************************************
*/

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap Destructor called" << std::endl;
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const &ninjaTrap)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_name = ninjaTrap._name;
	this->_hitPoints = ninjaTrap._hitPoints;
	this->_maxHitPoints = ninjaTrap._maxHitPoints;
	this->_energyPoints = ninjaTrap._energyPoints;
	this->_maxEnergyPoints = ninjaTrap._maxEnergyPoints;
	this->_level = ninjaTrap._level;
	this->_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	this->_rangedAttackDamage = ninjaTrap._rangedAttackDamage;
	this->_armorDamageReduction = ninjaTrap._armorDamageReduction;

	return *this;
}

void			NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	int			i = rand() % 5;
	std::string	shoebox[5] = {"Asics", "Adidas", "Reebok", "Nike", "Ecco"};

	std::cout << "NJ7G-TP " << this->_name << " throws a pair of " << shoebox[i]
		<< " into FragTrap " << target.getName() << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	int			i = rand() % 5;
	std::string	shoebox[5] = {"Asics", "Mida", "Reebok", "Nike", "Ecco"};

	std::cout << "NJ7G-TP " << this->_name << " throws a pair of " << shoebox[i]
		<< " into ScavTrap " << target.getName() << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	int			i = rand() % 5;
	std::string	shoebox[5] = {"Asics", "Mida", "Reebok", "Nike", "Ecco"};

	std::cout << "NJ7G-TP " << this->_name << " throws a pair of " << shoebox[i]
		<< " into NinjaTrap " << target.getName() << std::endl;
}
