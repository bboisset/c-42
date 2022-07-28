/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:44 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/28 10:04:50 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANA_HPP
# define DEF_HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

/**
 * @brief Because HumanA is created
 * with a Weapon, it should have a & on _weapon 
 */
class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		void attack(void);
		HumanA(std::string extName, Weapon& extWeapon);
		~HumanA(void);
};
#endif