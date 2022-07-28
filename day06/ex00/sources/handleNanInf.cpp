#include "../includes/convert.hpp"

bool	isValidFloatNanInf(std::string litteral)
{
	if (litteral == "nanf" || litteral == "-inff" || litteral == "+inff")
		return (true);
	return (false);
}

bool	isValidDoubleNanInf(std::string litteral)
{
	if (litteral == "nan" || litteral == "-inf" || litteral == "+inf")
		return (true);
	return (false);
}