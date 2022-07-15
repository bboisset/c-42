/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:57:26 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/14 13:32:49 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

void	brainAddress(void)
{
	std::string		speech("HI THIS IS BRAIN");
	std::string		*stringPTR(&speech);
	std::string		&stringREF(speech);

	std::cout << "Adress of the string in memory	: " << &stringPTR << std::endl;
	std::cout << "Adress stock by stringPTR	: " << stringPTR << std::endl;
	std::cout << "Adress stock by stringREF	: " << &stringREF << std::endl;

	std::cout << "Value of string			: " << speech << std::endl;
	std::cout << "Value of string by stringPTR	: " << *stringPTR << std::endl;
	std::cout << "Value of string by stringREF	: " << stringREF << std::endl;
}

int main(void)
{
	brainAddress();
	return (0);
}