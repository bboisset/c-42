#include "../includes/convert.hpp"

void	stringToInt(std::string litteral, std::string litteralType)
{
	std::cout << "int: ";
	if (
		litteralType == "double" 
		|| litteralType == "float" 
		|| !(isNumber(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stoi(litteral) << std::endl;
}

/**
 * @brief Determine if current number will need a .0 at the end
 * - If there is no comma, return .0
 * - If there is a comman without a numbe after it, return 0
 * 
 * @param litteral 
 * @return true 
 * @return false 
 */
std::string	floatPrecision(std::string litteral)
{
	int	commaPosition = litteral.find(".");
	char	numberAfterComma = 0;

	if (litteral[litteral.size() - 1] == 'f')
		litteral = litteral.substr(0, litteral.size() - 1);
	if (commaPosition == std::string::npos)
		return (".0");
	if (commaPosition == litteral.size() - 1)
		return (".0");
	numberAfterComma = litteral[commaPosition + 1];
	if (numberAfterComma == '0')
		return (".0");
	return ("");
}

void	stringToFloat(std::string litteral, std::string litteralType)
{
	std::cout << "float: ";
	if (!(isValidNumberWithDecimal(litteral)) || litteralType == "double")
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stof(litteral) << floatPrecision(litteral) << "f" << std::endl;
}

void	stringToDouble(std::string litteral, std::string litteralType)
{
	std::cout << "double: ";
	if (!(isNumber(litteral) || isValidNumberWithDecimal(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stod(litteral) << floatPrecision(litteral) << std::endl;
}

/**
 * @brief Convert a string to char.
 * If the string is not a char, return '\0'
 * 
 * @param litteral 
 * @return char 
 */
void	stringToChar(std::string litteral, std::string litteralType)
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

//on perd les 0 inutiles, est-ce important ?
void	convert(std::string litteral, std::string type)
{
	std::cout << "current type " << type << std::endl;
	stringToChar(litteral, type);
	stringToInt(litteral, type);
	stringToFloat(litteral, type);
	stringToDouble(litteral, type);
}
