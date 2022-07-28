/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:31:13 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/28 10:15:48 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/betterSed.hpp"

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
	std::string		line;

	if (!file)
		return handleErrors("Error: cannot open given file");
	noskipws(file);
	std::ofstream	newFile(fileName + ".replace");
	if (!newFile)
	{
		file.close();
		return handleErrors("Error: cannot create file");
	}
	while (std::getline(file, line))
	{
		while (line.find(pattern) != std::string::npos)
			line = line.replace(line.find(pattern), pattern.length(), replacement);
		newFile << line << std::endl;
	}
	closeFiles(file, newFile);
}