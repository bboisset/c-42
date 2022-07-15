/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:54:57 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/08 11:55:00 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int	Harl::getLevelIndex(std::string level)
{
	std::string	complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		if (complaintLevels[i] == level)
			return (i);
	}
	return (-1);
}

/**
 * @brief Call Harl function by their name
 *
 * @param level
 */
void Harl::complain(std::string level)
{
	int levelIndex = getLevelIndex(level);

	switch (levelIndex)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
	}
}

Harl::Harl()
{
}