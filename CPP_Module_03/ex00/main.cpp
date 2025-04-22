/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:54 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/22 15:09:47 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	ClapTrap Unknown;
	ClapTrap Elouann("Elouann");
	ClapTrap Cyprien("Cyprien");
	std::cout << std::endl;
	ClapTrap Cyprien2( Elouann );
	std::cout << std::endl;
	
	Cyprien.attack("Elouann");
	Elouann.takeDamage(0);
	Elouann.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Cyprien.attack("Elouann");
		Elouann.takeDamage(3);
	}
	std::cout << std::endl;
	Elouann.beRepaired(10);
	std::cout << std::endl;
	Elouann.attack("Cyprien");
	std::cout << std::endl;
	return 0;
}