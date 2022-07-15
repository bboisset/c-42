/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:31:13 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 10:04:10 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/betterSed.hpp"

/**
 * @brief Search if pattern is in file at current iterator
 * 
 * @param fileIt Iterator source on file
 * @param pattern String seek in file
 * @return int -1 if pattern is completely found or index of match stop
 */
int	compareFileToString(std::istream_iterator<char> &fileIt, std::string pattern)
{
	int	i(1);
	std::istream_iterator<char>	end;

	while (fileIt != end && i < (int)pattern.length())
	{
		fileIt++;
		if (*fileIt != pattern[i])
			return (i);
		i++;
	}
	return (-1);
}

/**
 * @brief Search if pattern is in file at current iterator
 * If it's true return replacement
 * Else return read elements
 * 
 * @param fileIt Iterator on source file
 * @param pattern String to be replaced
 * @param replacement Replacement string
 * @param newFile Open file, for output
 */
void	fileMatchingPattern(std::istream_iterator<char> &fileIt, std::string pattern, std::string replacement, std::ofstream &newFile)
{
	int res(0);
	std::istream_iterator<char>	end;
	
	res = compareFileToString(fileIt, pattern);
	if (res == -1)
        newFile << replacement;
	else
	{
		newFile << pattern.substr(0, res);
		if (fileIt != end)
			newFile << *fileIt;
	}
}

/**
 * @brief Open filename and copy it content to
 * filename.replace and replace pattern with replacement
 * - noskipws is for handle space, carriage return..
 * 
 * @param fileName Name of file to read
 * @param pattern Pattern to replace in file
 * @param replacement Replacement of pattern
 */
void	replaceFile(std::string fileName, std::string pattern, std::string replacement)
{
	std::ifstream	file(fileName);
	std::istream_iterator<char>	it(file);
	std::istream_iterator<char>	end;

	if (!file)
		return handleErrors("Error: cannot open given file");
	noskipws(file);
	std::ofstream	newFile(fileName + ".replace");
	if (!newFile)
	{
		file.close();
		return handleErrors("Error: cannot create file");
	}
	while(it != end)
	{
		if (*it == pattern[0])
            fileMatchingPattern(it, pattern, replacement, newFile);
		else
			newFile << *it;
		it++;
	}
	closeFiles(file, newFile);
}