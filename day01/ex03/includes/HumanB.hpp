/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:53 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 12:11:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANB_HPP
# define DEF_HUMANB_HPP
# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	setWeapon(Weapon &newWeapon);
		void	attack(void);
		HumanB(std::string extName);
		~HumanB(void);
};
#endif