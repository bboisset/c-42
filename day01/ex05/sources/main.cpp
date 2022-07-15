/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:55:06 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/14 15:02:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void)
{
	Harl	harl;

	std::cout << "Debug message : " << std::endl;
	harl.complain("debug");
	std::cout << "Info message : " << std::endl; 
	harl.complain("info");
	std::cout << "Warning message : " << std::endl; 
	harl.complain("warning");
	std::cout << "Error message : " << std::endl; 
	harl.complain("error");
	return (0);
}