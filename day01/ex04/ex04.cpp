#include <iostream>
#include <string>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &r = str;

	std::cout << "String accessed by pointer  : " << *p << std::endl;
	std::cout << "String accessed by reference: " << r << std::endl;
}
