#include "../includes/convert.hpp"

int	stringToInt(std::string litteral)
{
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
		return (0);
	return (std::stoi(litteral));
}

double	stringToDouble(std::string litteral)
{
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
		return (0);
	return (std::stod(litteral));
}

/**
 * @brief Convert a string to char.
 * If the string is not a char, return '\0'
 * 
 * @param litteral 
 * @return char 
 */
char	stringToChar(std::string litteral)
{
	if (litteral.length() != 1)
		return (0);
	return (litteral[0]);
}

float	stringToFloat(std::string litteral)
{
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
		return (0);
	return (std::stof(litteral));
}

void	convert(std::string litteral, std::string type)
{
	std::cout << "char: " << stringToChar(litteral) << std::endl;
	std::cout << "int: " << stringToInt(litteral) << std::endl;
	std::cout << "float: " << stringToFloat(litteral) << std::endl;
	std::cout << "double: " << stringToDouble(litteral) << std::endl;
}