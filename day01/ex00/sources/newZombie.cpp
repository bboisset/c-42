/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:20:01 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/08 11:23:53 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/**
 * @brief Create a new Zombie with dynamic allocation
 *
 * @param name Name of the Zombie
 * @return Zombie* Pointer to zombie
 */
Zombie*	newZombie(std::string name)
{
	Zombie *newZ = new Zombie(name);

	return (newZ);
}