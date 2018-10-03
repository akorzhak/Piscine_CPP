#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "ZombieEvent obj is created.\n";
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent obj is deleted.\n";
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();

	zombie->setType(this->getZombieType());
	zombie->setName(name);
	std::cout << "Zombie of " << zombie->getType() << " type, named "
		<< zombie->getName() << " is now alive!\n";
	return zombie;
}

Zombie		*ZombieEvent::randomChump(void)
{
	int			i = rand() % 5;
	std::string	names[5] = {"Isaac", "Esteban", "Franklin", "Tony", "Levi"};
	Zombie		*zombie = new Zombie();

	zombie->setType(this->getZombieType());
	zombie->setName(names[i]);
	zombie->announce();
	return zombie;
}

std::string	ZombieEvent::getZombieType(void)
{
	return this->_type;
}
