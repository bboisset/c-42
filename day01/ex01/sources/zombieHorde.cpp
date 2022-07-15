/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:29:26 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/14 13:38:11 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * @brief Create a Zombie Horde in a single allocation
 * 
 * @param N Number of zombie to allocate
 * @param name Name of all zombies
 * @return Zombie* Pointer on zombies
 */
Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];

	for (int i(0); i < N; i++)
		horde[i].setName(name);
	return (horde);
}