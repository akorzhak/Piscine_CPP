#include "easyfind.hpp"
#include <vector>
#include <list>

int		main(void)
{
	std::list<int>	lst;
	std::vector<int>	vec;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(4);
	lst.push_back(6);
	lst.push_back(42);
	lst.push_back(23);
	lst.push_back(42);

	try {
		std::cout << "Trying to find '42' in the list container..." << std::endl;
		std::cout << *(easyfind(lst, 42)) << std::endl;
		std::cout << "Trying to find '128' in the list container..." << std::endl;
		std::cout << *(easyfind(lst, 128)) << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(42);
	vec.push_back(23);
	vec.push_back(42);

	try {
		std::cout << "Trying to find '42' in the vector container..." << std::endl;
		std::cout << *(easyfind(vec, 42)) << std::endl;
		std::cout << "Trying to find '128' in the vector container..." << std::endl;
		std::cout << *(easyfind(vec, 128)) << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
