#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string const name, std::string const title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer)
{
	*this = sorcerer;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. "
		<< "Consequences will never be the same !" << std::endl;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const & sorcerer)
{
	this->_name = sorcerer.getName();
	this->_title = sorcerer.getTitle();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const &sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
		<< ", and I like ponies !" << std::endl;	
	return o;
}

void 			Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string		Sorcerer::getName(void) const
{
	return this->_name;
}

std::string		Sorcerer::getTitle(void) const
{
	return this->_title;
}
