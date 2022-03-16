#include <iostream>
#include <string>
#include <vector>
# include <algorithm>

/**
 ** @brief Pop name of the program
 ** 
 ** @param argc 
 ** @param argv 
 ** @return void
 **/
void	printArgs(int argc, char **argv)
{
	std::vector<std::string>			argList(argv + 1, argv + argc);
	std::vector<std::string>::iterator	it;

	for (it = argList.begin(); it != argList.end(); ++it)
	{
		std::for_each((*it).begin(), (*it).end(), [](char & c){ 
			c = ::toupper(c);
		});
		std::cout << *it;
		if (argc-- > 2)
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