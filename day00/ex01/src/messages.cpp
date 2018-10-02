#include "phonebook.hpp"

void	displayCommandMessage()
{
	std::cout << "Enter one of the folowing commands: "
		<< GREEN << "ADD" << RESET << " | "
		<< YELLOW << "SEARCH" << RESET << " | "
		<< RED << "EXIT\n" << RESET;
}

void	displayWarningMessage(std::string message)
{
	std::cout << RED << message << RESET;
}

void	displayGreenMessage(std::string message)
{
	std::cout << GREEN << message << RESET;
}

void	displayYellowMessage(std::string message)
{
	std::cout << YELLOW << message << RESET;
}

void	displayMessage(std::string message)
{
	std::cout << message;
}

void	displayMessageEndl(std::string message)
{
	std::cout << message << std::endl;
}
