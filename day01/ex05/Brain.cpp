#include "Brain.hpp"

Brain::Brain(void)
{
	this->address << this;
	std::cout << "Brain is alive\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain is dead\n";
}

std::string	Brain::identify(void)
{
	return (this->address.str());
}
