#include "Array.cpp"

int		main(void)
{

	Array<int>	array(15);

	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = i + 1;
	try
	{
		for (unsigned int n = 0; n < array.size(); n++)
			std::cout << "Array[" << n << "] = ( " << array[n] << " )" << std::endl;

		std::cout << "*trying to reach an element out of limits*" << std::endl;
		std::cout << array[array.size()];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
