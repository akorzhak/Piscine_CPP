#include "Peon.hpp"

Peon::Peon(std::string const name): Victim(name)
{
	_name = name;
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const & peon): Victim(peon)
{
	*this = peon;
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void 			Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

Peon &		Peon::operator=(Peon const & peon)
{
	this->_name = peon.getName();

	return *this;
}
