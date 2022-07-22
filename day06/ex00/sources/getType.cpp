#include "../includes/convert.hpp"


/**
 * @brief A char must be 
 * - 1 length long
 * 
 * @param litteral 
 * @return bool
 */
bool	isChar(std::string litteral)
{
	if (litteral.size() != 1)
		return (false);
	return (true);
}

bool	isInStrings(std::string litteral, std::string *strings, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (litteral == strings[i])
			return (true);
	}
	return (false);
}

/**
 * @brief Check minimum requirements for number without decimal part
 * - can be negative
 * - should contain only digits
 * 
 * @param litteral 
 * @return bool True if litteral is a number without decimal part
 */
bool	isNumber(std::string litteral)
{
	if (litteral.size() < 1)
		return (false);
	if (litteral[0] == '-')
		litteral = litteral.substr(1);
	for (int i = 0; i < litteral.size(); i++)
	{
		if (!isdigit(litteral[i]))
			return (false);
	}
	return (true);
}

/**
 * @brief Check minimum requirements for number with decimal part,
 * - can be negative
 * - should contain only digits exept the decimal point
 * - should contain only one decimal point
 * - could contain a f at the end of the litteral
 * 
 * @param litteral 
 * @return bool True if litteral is a number with decimal part
 */
bool	isValidNumberWithDecimal(std::string litteral)
{
	int	decimalPoint = 0;

	if (litteral.size() < 1)
		return (false);
	if (litteral[0] == '-')
		litteral = litteral.substr(1);
	if (litteral[litteral.size() - 1] == 'f')
		litteral = litteral.substr(0, litteral.size() - 1);
	for (int i = 0; i < litteral.size(); i++)
	{
		if (litteral[i] == '.')
			decimalPoint++;
		if (!isdigit(litteral[i]) && litteral[i] != '.')
			return (false);
	}
	if (decimalPoint > 1)
		return (false);
	return (true);
}

/**
 * @brief An int must
 * - be between -2147483648 and 2147483647
 * - be composed of digits
 * - can start with a '-'
 * 
 * @param litteral 
 * @return bool 
 */
bool	isInt(std::string litteral)
{
	int	tempInt = 0;

	if (!(isNumber(litteral)))
		return (false);
	try {
		tempInt = std::stoi(litteral);

		if (tempInt < -2147483648 || tempInt > 2147483647)
			return (false);
	} catch (std::exception &e) {
		return (false);
	}
	return (true);
}

/**
 * @brief An float must
 * - be between -3.402823466e+38 and 3.402823466e+38
 * - be composed of digits and '.'
 * - could contain a '.'
 * - contain a 'f' at the end
 * - can start with a '-'
 * 
 * @param litteral 
 * @return bool
 */
bool	isFloat(std::string litteral)
{
	float	tempFloat = 0;
	std::string	validFloat[3] = {
		"-inff",
		"+inff",
		"nanf",
	};

	if (isInStrings(litteral, validFloat, 3))
		return (true);
	if (!isValidNumberWithDecimal(litteral))
		return (false);
	if (litteral.rfind("f") != litteral.size() - 1)
		return (false);
	try {
		tempFloat = std::stof(litteral);
		if (tempFloat < -3.402823466e+38 || tempFloat > 3.402823466e+38)
			return (false);
	} catch (std::exception &e) {
		return (false);
	}
	return (true);
}

/**
 * @brief An double must
 * - be between -1.7976931348623157e+308 and 1.7976931348623157e+308
 * - be composed of digits
 * - could contain a '.'
 * - can start with a '-'
 * 
 * @param litteral 
 * @return bool
 */
bool	isDouble(std::string litteral)
{
	double	tempDouble = 0;
	std::string	validDouble[3] = {
		"-inf",
		"+inf",
		"nan",
	};

	if (isInStrings(litteral, validDouble, 3))
		return (true);
	if (!isValidNumberWithDecimal(litteral))
		return (false);
	try {
		tempDouble = std::stod(litteral);
		if (tempDouble < -1.7976931348623157e+308 || tempDouble > 1.7976931348623157e+308)
			return (false);
	} catch (std::exception &e) {
		return (false);
	}
	return (true);
}

/**
 * @brief Get the type of given litteral. Valid
 * types are: int, float, double, char.
 * 
 * @param litteral 
 * @return std::string [int, float, double, char, invalid]
 */
std::string	getLitteralType(std::string litteral)
{
	if (isInt(litteral))
		return ("int");
 	if (isFloat(litteral))
		return ("float");
	if (isDouble(litteral))
		return ("double");
	if (isChar(litteral))
		return ("char");
	return ("invalid");
}