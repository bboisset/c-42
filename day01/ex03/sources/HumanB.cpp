/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:11 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 13:11:16 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

void HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " can't attack without a weapon" << std::endl;
	}
}

/**
 * @brief Assign Weapon to Human object
 * Weapon type can be null
 * 
 * @param newWeapon 
 */
void	HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}

HumanB::HumanB(std::string extName)
	: _name(extName), _weapon(0)
{
}

HumanB::~HumanB(void)
{
}