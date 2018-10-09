#include "Victim.hpp"

Victim::Victim(void){}

Victim::Victim(std::string const name)
{
	_name = name;
	std::cout << "Some random victim called " << _name
		<< " just popped !" << std::endl;
}

Victim::Victim(Victim const & victim)
{
	*this = victim;
	std::cout << "Some random victim called " << _name
		<< " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for "
		<< "no apparent reason !" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Victim const &victim)
{
	o << "I am " << victim.getName() << " and I like otters !" << std::endl;	
	return o;
}

Victim &		Victim::operator=(Victim const & victim)
{
	this->_name = victim.getName();

	return *this;
}

void 			Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string		Victim::getName(void) const
{
	return this->_name;
}
