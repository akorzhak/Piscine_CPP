#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "The Pony is born now!\n";
}

Pony::~Pony(void)
{
	std::cout << "Pony is successfully killed!\n";
}

void		Pony::setFluffy(bool fluffy)
{
	this->fluffy = fluffy;
}

void		Pony::setWeight(int weight)
{
	this->weight = weight;
}

void		Pony::setAge(int age)
{
	this->age = age;
}

void		Pony::setName(std::string name)
{
	this->name = name;
}

bool		Pony::getFluffy(void)
{
	return this->fluffy;
}

int			Pony::getWeight(void)
{
	return this->weight;
}

int			Pony::getAge(void)
{
	return this->age;
}

std::string	Pony::getName(void)
{
	return this->name;
}
