#include <iostream>

template <typename T>
void	iter(T *arr, int len, void (*f) (T const &))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void	displayElem(T const &elem)
{
	std::cout << "[ " << elem << " ]";
}

int		main(void)
{
	int			intArr[] = {1, 2, 3, 4, 5, 6, 7};
	float		floatArr[] = {1.5, 2.1, 4.6, 9.3};
	std::string strArr[] = {"One", "Two", "Three", "Four"};

	std::cout << "Applying displayElem func on INT array using iter func..." << std::endl;
	::iter <int>(intArr, (sizeof(intArr)/sizeof(*intArr)), ::displayElem);
	std::cout << std::endl;

	std::cout << "Applying displayElem func on FLOAT array using iter func..." << std::endl;
	::iter <float>(floatArr, (sizeof(floatArr)/sizeof(*floatArr)), ::displayElem);
	std::cout << std::endl;	

	std::cout << "Applying displayElem func on STRING array using iter func..." << std::endl;
	::iter <std::string>(strArr, (sizeof(strArr)/sizeof(*strArr)), ::displayElem);
	std::cout << std::endl;
}
