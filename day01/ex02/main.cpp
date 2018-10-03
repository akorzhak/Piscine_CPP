#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		*zombie;
	Zombie		*zombieRand;
	ZombieEvent	zombieEvent;

	zombieEvent.setZombieType("Dark");
	zombie = zombieEvent.newZombie("Alex");
	zombieRand = zombieEvent.randomChump();
	delete zombie;
	delete zombieRand;
	return 0;
}
