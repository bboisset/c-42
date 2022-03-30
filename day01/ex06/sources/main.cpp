#include "../includes/Karen.hpp"

void	runKaren(std::string authorized_level)
{
	Karen	karen(authorized_level);

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Only one argument is required" << std::endl;
		return (0);
	}
	runKaren(argv[1]);
	return (0);
}