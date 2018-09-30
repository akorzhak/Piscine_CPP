#include <iostream> //cout
#include <cctype> //toupper
#include <cstdio> //putchar

int		main(int argc, char *argv[])
{
	int a, b;

	if (argc > 1)
	{
		for (a = 1; argv[a]; a++)
		{
			for (b = 0; argv[a][b]; b++)
				putchar(toupper(argv[a][b]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	putchar('\n');
	return 0;
}
