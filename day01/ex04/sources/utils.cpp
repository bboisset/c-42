#include "../includes/betterSed.hpp"

void	closeFiles(std::ifstream &file, std::ofstream &newFile)
{
	file.close();
	newFile.close();
}

void	handleErrors(std::string error)
{
	std::cerr << error << std::endl;
}