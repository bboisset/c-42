/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:19:29 by bboisset          #+#    #+#             */
/*   Updated: 2022/07/08 11:23:49 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

int main(void)
{

	std::cout << "Mixing first ingredients, to make Zombie 1 (Pierre) :" << std::endl;
	{
		Zombie	zombie1("Pierre");

		zombie1.announce();
	}
	std::cout << "Mixing second ingredients, to make Zombie 2 (Paul) using newZombie dynamic allocation" << std::endl;
	{
		Zombie	*zombie2 = newZombie("Paul");
		
		zombie2->announce();
		delete zombie2;
	}
	std::cout << "Mixing last ingreditents, to make Zombie 3 (Jack) with randomChump()" << std::endl;
	{
		randomChump("Jack");
	}
	return (0);
}