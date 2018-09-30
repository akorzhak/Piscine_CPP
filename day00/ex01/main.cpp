#include <iostream>
#include <string>

int		main(void)
{
	std::string firstName;
	std::cout >> "Let's add a new contact\n";
	std::cout >> "Enter the First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "First Name: " << firstName << std::endl;
	return 0;
}