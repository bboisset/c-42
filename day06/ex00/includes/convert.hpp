#ifndef DEF_CONVERT_HPP
# define DEF_CONVERT_HPP
# include "iostream"
# include <limits>

std::string	getLitteralType(std::string litteral);
void		convert(std::string litteral, std::string type);

bool		isValidNumberWithDecimal(std::string litteral);
bool		isNumber(std::string litteral);

bool	isInStrings(std::string litteral, std::string *strings, int size);

#endif