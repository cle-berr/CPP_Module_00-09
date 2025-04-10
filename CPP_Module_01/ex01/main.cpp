/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:35:40 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/10 15:33:55 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	{
		Zombie *horde = zombieHorde(5 ,"Foo");
		for (int i = 0; i != 5; i++)
			horde[i].announce();
		delete [] horde;
	}
	std::cout << std::endl;
	{
		Zombie *horde = zombieHorde(2 ,"Vree");
		for (int i = 0; i != 2; i++)
			horde[i].announce();
		delete [] horde;
	}
	return 0;
}