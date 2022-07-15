#ifndef BETTER_SED_HPP
# define BETTER_SED_HPP
# include <string>
# include <iostream>
# include <fstream>
# include <iterator>

void	replaceFile(std::string fileName, std::string pattern, std::string replacement);

/** Utils.cpp **/
void	handleErrors(std::string error);
void	closeFiles(std::ifstream &file, std::ofstream &newFile);

#endif