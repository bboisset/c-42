/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:29:17 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/14 13:38:54 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	loopZombies(Zombie *zombieHorde, int zombieCount)
{
	for (int i(0); i < zombieCount; i++)
		zombieHorde[i].announce();
}

/**
 * @brief Allocate X zombie in single time
 * - Announce each of theme
 * - Delete thems
 */
int main(void)
{
	int		zombieCount(10);
	Zombie	*horde = zombieHorde(zombieCount, "Alvin");

	std::cout << "10 Zombies in production" << std::endl;
	loopZombies(horde, zombieCount);
	delete [] horde;
	return (0);
}