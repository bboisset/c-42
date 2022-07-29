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

void	doubleToAll(std::string litteral)
{
	double	tempDouble(std::stod(litteral));//std::strtod
	
	std::cout << "char: ";
	if (litteral.length() == 1)
		std::cout << static_cast<char>(tempDouble) << std::endl;
	else if (isValidDoubleNanInf(litteral))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'*'" << std::endl;
	std::cout << "int: ";
	if (isValidDoubleNanInf(litteral))
		std::cout << "impossible" << std::endl;
	else 
		std::cout << static_cast<int>(tempDouble) << std::endl;
	std::cout << "float: " << static_cast<float>(tempDouble) << "f" << std::endl;
	std::cout << "double: " << (double)tempDouble << std::endl;
}

void	floatToAll(std::string litteral)
{
	float	tempFloat(std::stof(litteral));

	std::cout << "char: ";
	if (litteral.length() == 1)
		std::cout << static_cast<char>(tempFloat) << std::endl;
	else if (isValidFloatNanInf(litteral))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'*'" << std::endl;
	std::cout << "int: ";
	if (isValidDoubleNanInf(litteral) || isValidFloatNanInf(litteral))
		std::cout << "impossible" << std::endl;
	else 
		std::cout << static_cast<int>(tempFloat) << std::endl;
	std::cout << "float: " << tempFloat << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tempFloat) << std::endl;
}

void	intToAll(std::string litteral)
{
	int	tempInt(std::stoi(litteral));

	std::cout << "char: ";
	if (litteral.compare("0") == 0)
		std::cout << "Non Displayable" << std::endl;
	else if (litteral.length() == 1)
		std::cout << static_cast<char>(tempInt) << std::endl;
	else
		std::cout << "'*'" << std::endl;
	std::cout << "int: " << tempInt << std::endl;
	std::cout << "float: " << static_cast<float>(tempInt) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tempInt) << std::endl;
}

void	charToAllTypes(std::string litteral)
{
	char	tempChar(litteral[0]);

	std::cout << "char: " << tempChar << std::endl;
	std::cout << "int: " << static_cast<int>(tempChar) << std::endl;
	std::cout << "float: " << static_cast<float>(tempChar) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tempChar) << std::endl;
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
		doubleToAll(litteral);
	else if (type == "float")
		floatToAll(litteral);
	else if (type == "int")
		intToAll(litteral);
	else if (type == "char")
		charToAllTypes(litteral);
	else
		std::cout << "impossible" << std::endl;
}
