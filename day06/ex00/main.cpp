#include "Convert.hpp"

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::string str(argv[1]);

		Convert convert(str);
		convert.convertValue();
		convert.displayConvertion();
		return 0;
	}
	std::cout << "usage: ./convert [input_value]" << std::endl;
	return 1;
}