/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:53:58 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 11:13:24 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WEAPON_HPP
# define DEF_WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		std::string	getType(void) const;
		void	setType(std::string newType);
		Weapon(std::string extType);
};

#endif