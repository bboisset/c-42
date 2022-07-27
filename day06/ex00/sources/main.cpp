# include "../includes/convert.hpp"

int	main(int argc, char *argv[])
{
	std::string	type;
	if (argc != 2)
	{
		std::cout << "Usage: ./convert litteral" << std::endl;
		return (1);
	}
	type = getLitteralType(argv[1]);
	convert(argv[1], type);
	return (0);
}