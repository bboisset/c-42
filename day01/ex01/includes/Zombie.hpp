/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:29:49 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/15 09:56:54 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIE_HPP
# define DEF_ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		void	announce(void);
		void	setName(std::string newName);
		Zombie(void);
		~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );
#endif