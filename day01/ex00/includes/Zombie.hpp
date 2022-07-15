/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:21:11 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 10:01:34 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIE_HPP
# define DEF_ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		void	announce(void);
		Zombie(std::string zName);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif