#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->_zombies = new Zombie[n];

    this->_zombiesNb = n;
    while (--n >= 0)
    {
        this->_zombies[n].setType("Horde");
        this->_zombies[n].setName(this->randomChump());
    }
    std::cout << "ZombieHorde obj is created.\n";
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->_zombies;
	std::cout << "ZombieHorde obj is deleted.\n";
}

std::string	ZombieHorde::randomChump(void)
{
	int			i = rand() % 5;
	std::string	names[5] = {"Isaac", "Esteban", "Franklin", "Tony", "Levi"};

	return names[i];
}

void		ZombieHorde::announce(void)
{
	int i = this->_zombiesNb;
	while (--i >= 0)
	{
		this->_zombies[i].announce();
	}
}
