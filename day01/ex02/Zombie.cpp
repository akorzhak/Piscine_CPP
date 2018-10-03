#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie is alive now!\n";
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie is killed now!\n";
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
}

void		Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string	Zombie::getName(void)
{
	return this->_name;
}

std::string	Zombie::getType(void)
{
	return this->_type;
}

void		Zombie::announce(void)
{
	std::cout << "Zombie " << this->getName() << " of " << this->getType()
		<< " type wants Braiiiiiiinnnssss...\n";
}
