#include "../includes/Harl.hpp"

void	runHarl(std::string authorized_level)
{
	Harl	harl(authorized_level);

	harl.complain();
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter LEVEL" << std::endl;
		return (0);
	}
	runHarl(argv[1]);
	return (0);
}