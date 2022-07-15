/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:29:22 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/08 11:29:23 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": *DIE IN TERRIBLE CONDITION*" << std::endl;
}

Zombie::Zombie(void)
	: name("")
{
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}