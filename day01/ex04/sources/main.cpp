/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:31:04 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/14 15:31:07 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/betterSed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./betterSed filename pattern replacement" << std::endl;
		return (1);
	}
	replaceFile(argv[1], argv[2], argv[3]);
	return (0);
}
