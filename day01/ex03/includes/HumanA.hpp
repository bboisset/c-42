/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:44 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 13:07:13 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANA_HPP
# define DEF_HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

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