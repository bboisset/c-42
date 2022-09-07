#ifndef DEF_CONVERT_HPP
# define DEF_CONVERT_HPP
# include "iostream"
# include <iomanip>
# include <limits>
# define CHAR_MIN 7
# define CHAR_MAX 126

bool	isValidFloatNanInf(std::string litteral);
bool	isValidDoubleNanInf(std::string litteral);

std::string	getLitteralType(std::string litteral);
void		convert(std::string litteral, std::string type);

bool		isValidFloatingNumber(std::string litteral);
bool		isNumber(std::string litteral);

int			isInStrings(std::string litteral, std::string *strings, int size);

#endif