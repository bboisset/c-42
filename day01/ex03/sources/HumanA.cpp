/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:04 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 13:11:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

/**
 * @brief Assign Weapon to Human object
 * Weapon type cannot be null
 * 
 * @param newWeapon 
 */
HumanA::HumanA(std::string extName, Weapon &extWeapon)
	: _name(extName), _weapon(extWeapon)
{
}

HumanA::~HumanA(void)
{
}