#include "../includes/convert.hpp"

/**
 * @brief Print `inf` or `nan` converted to double or float
 * 
 * @param litteral Muste be a litteral `inf` or `nan`
 * @param type Must be `float` or `double`
 * @return True if it's a valid `inf` or `nan` float or double
 */
bool	prinConvertedNanInf(std::string &litteral, 
	std::string litteralType, std::string type)
{
	std::string	validFloat[3] = {
		"-inff",
		"+inff",
		"nanf",
	};
	std::string	validDouble[3] = {
		"-inf",
		"+inf",
		"nan",
	};

	if (type != "float" && type != "double"
		|| (litteralType != "float" && litteralType != "double"))
		return (false);
	if (isInStrings(litteral, validFloat, 3) == -1
		&& isInStrings(litteral, validDouble, 3) == -1)
		return (false);
	//std::cout << "type : " << type << " | litteralType : " << litteralType << std::endl;
	if (litteralType == "float")
	{
		if (type == "float")
			std::cout << litteral << std::endl;
		else
			std::cout << litteral.substr(0, litteral.size() - 1) << std::endl;
	}
	else if (litteralType == "double")
	{
		if (type == "double")
			std::cout << litteral << std::endl;
		else
			std::cout << litteral << "f" << std::endl;
	}
	return (true);
}

void	stringToInt(std::string litteral, std::string litteralType)
{
	std::cout << "int: ";
	if (!(isNumber(litteral)))
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
	int		commaPosition = litteral.find(".");
	char	numberAfterComma = 0;

	if (litteral[litteral.size() - 1] == 'f')
		litteral = litteral.substr(0, litteral.size() - 1);
	if (commaPosition == std::string::npos)
		return (".0");
	if (commaPosition == litteral.size() - 1)
		return ("0");
	numberAfterComma = litteral[commaPosition + 1];
	if (numberAfterComma == '0')
		return (".0");
	return ("");
}

void	stringToFloat(std::string litteral, std::string litteralType)
{
	std::string	tempFloat;
	
	std::cout << "float: ";
	if (prinConvertedNanInf(litteral, litteralType, "float"))
		return ;
	if (!(isValidFloatingNumber(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stof(litteral) << floatPrecision(litteral) << "f" << std::endl;
}

void	stringToDouble(std::string litteral, std::string litteralType)
{
	std::cout << "double: ";
	if (prinConvertedNanInf(litteral, litteralType, "double"))
		return ;
	if (!(isNumber(litteral) || isValidFloatingNumber(litteral)))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::stod(litteral) << floatPrecision(litteral) << std::endl;
}

void	doubleToAll(double litteral)
{
	std::cout << "char: " << static_cast<char>(litteral) << std::endl;
	std::cout << "int: " << static_cast<int>(litteral) << std::endl;
	std::cout << "float: " << static_cast<float>(litteral) << std::endl;
	std::cout << "double: " << litteral << std::endl;
}

void	floatToAll(float litteral)
{
	std::cout << "char: " << static_cast<char>(litteral) << std::endl;
	std::cout << "int: " << static_cast<int>(litteral) << std::endl;
	std::cout << "float: " << litteral << std::endl;
	std::cout << "double: " << static_cast<double>(litteral) << std::endl;
}

void	intToAll(int litteral)
{
	std::cout << "char: " << static_cast<char>(litteral) << std::endl;
	std::cout << "int: " << litteral << std::endl;
	std::cout << "float: " << static_cast<float>(litteral) << std::endl;
	std::cout << "double: " << static_cast<double>(litteral) << std::endl;
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

void	convert(std::string litteral, std::string type)
{
	if (type == "double")
		doubleToAll(std::stod(litteral));
	stringToChar(litteral, type);
	stringToInt(litteral, type);
	stringToFloat(litteral, type);
	stringToDouble(litteral, type);
}