#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &MateriaSource)
{
	std::cout << "MateriaSource copied" << std::endl;
}