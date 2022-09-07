#include "../includes/convert.hpp"

/**
 * @brief Determine if current litteral is a `nanf` or `inff`
 * 
 * @param litteral 
 */
bool	isValidFloatNanInf(std::string litteral)
{
	if (litteral == "nanf" || litteral == "-inff" || litteral == "+inff")
		return (true);
	return (false);
}

/**
 * @brief Determine if current litteral is `nan`, `inf` or `-inf`
 * 
 * @param litteral
 */
bool	isValidDoubleNanInf(std::string litteral)
{
	if (litteral == "nan" || litteral == "-inf" || litteral == "+inf")
		return (true);
	return (false);
}