#include "../includes/convert.hpp"

void	stringToInt(std::string litteral)
{
	std::cout << "int: ";
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stoi(litteral) << std::endl;
}

void	stringToDouble(std::string litteral)
{
	std::cout << "double: ";
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stod(litteral) << "f" << std::endl;
}

/**
 * @brief Convert a string to char.
 * If the string is not a char, return '\0'
 * 
 * @param litteral 
 * @return char 
 */
void	stringToChar(std::string litteral)
{
	std::cout << "char: ";
	if (litteral == "0")
	{
		std::cout <<  "Non displayable" << std::endl;
		return ;
	}
	if (litteral.length() > 1)
	{
		std::cout << "'*'" << std::endl;
		return ;
	}
	std::cout << "'" << litteral[0] << "'" << std::endl;
}

void	stringToFloat(std::string litteral)
{
	std::cout << "float: ";
	if (!(isNumber(litteral) || isNumberWithDecimal(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stof(litteral) << std::endl;
}

void	convert(std::string litteral, std::string type)
{
	stringToChar(litteral);
	stringToInt(litteral);
	stringToFloat(litteral);
	stringToDouble(litteral);
}