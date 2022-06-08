# include <iostream>
# include <cstring>
# include <cctype>
//# include <algorithm> forbidden

/**
 ** @brief Print arguments in a megaphone
 ** 
 ** @param argc 
 ** @param argv 
 ** @return void
 **/
void	printArgs(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			char upperChar = toupper(argv[i][j]);
			std::cout << upperChar;
		}
		if (i < argc - 1)
			std::cout << " ";
	}
}

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		printArgs(argc, argv);
	std::cout << std::endl;
	return (0);
}