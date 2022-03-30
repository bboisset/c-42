# include <string>
# include <iostream>
# include <fstream>

/**
 * @brief Search if pattern is in file at current iterator
 * 
 * @param fileIt Iterator on file
 * @param pattern String seek in file
 * @return int -1 if pattern is completely found or index of match stop
 */
int	compareFileToString(std::istream_iterator<char> fileIt, std::string pattern)
{
	int	i(0);
	std::istream_iterator<char>	end;

	while (fileIt != end && i < (int)pattern.length())
	{
		if (*fileIt != pattern[i++])
			return (i);
		fileIt++;
	}
	return (-1);
}

/**
 * @brief Search if pattern is in file at current iterator
 * If it's true return replacement
 * Else return read elements
 * 
 * @param fileIt 
 * @param pattern 
 * @param replacement 
 * @return std::string 
 */
std::string	fileMatchingPattern(std::istream_iterator<char> fileIt, std::string pattern, std::string replacement)
{
	int res(0);
	
	res = compareFileToString(fileIt, pattern);
	if (res == -1)
		return (replacement);
	else
		return (pattern.substr(0, res));

}

void	replaceFile(std::string fileName, std::string pattern, std::string replacement)
{
	std::ifstream	file(fileName);
	std::ofstream	replaceFile(fileName + ".replace");
	std::istream_iterator<char>	it(file);
	std::istream_iterator<char>	end;

	noskipws(file);
	while(it != end)
	{
		if (*it == pattern[0])
			replaceFile << fileMatchingPattern(it, pattern, replacement);
		replaceFile << *it;
		++it;
	}
}

/**
 * @brief Semble fonctionnel, a verifier
 * - gerer les cas d erreurs
 * - verifier que le programme est a la norme
 * 
 * @return int 
 */
int main(void)
{
	replaceFile("test.txt", "lol","abc");
}

/**
 * ALGO
 * - Avancer dans le fichier caractere par caractere
 * - copier caractere f2
 * - Si caractere courant match
 * 	- on copie le caractere dans un string
 * 	- si tout match
 * 		- Ecriture de replacement dans f2
 * 		- suppression du string
 * 	- si différent
 * 		- ecriture du string dans f2
 * 
 */