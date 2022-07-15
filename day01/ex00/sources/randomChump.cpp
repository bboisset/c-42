/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:20:48 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/08 11:24:04 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie  newZ(name);

	newZ.announce();
}