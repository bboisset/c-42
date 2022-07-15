/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:32 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 11:13:07 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

std::string	Weapon::getType(void) const
{
	return (_type);
}

Weapon::Weapon(std::string extType)
	: _type(extType)
{}