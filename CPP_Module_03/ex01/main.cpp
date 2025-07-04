/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:54 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/04 14:18:36 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void Claptest()
{
	std::cout << YELLOW << "-------------------CLAPTEST-------------------" << RESET << std::endl;

	std::cout << std::endl;
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
}

void Scavtest()
{
	std::cout << MAGENTA << "-------------------SCAVTEST-------------------" << RESET << std::endl;

	std::cout << std::endl;
	ScavTrap Elouann("Elouann");
	ScavTrap Cyprien("Cyprien");
	std::cout << std::endl;

	ScavTrap Cyprien2( Elouann );
	std::cout << std::endl;
	
	Cyprien.attack("Elouann");
	Elouann.takeDamage(20);
	Elouann.beRepaired(10);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		Cyprien.attack("Elouann");
		Elouann.takeDamage(20);
	}

	std::cout << std::endl;
	Elouann.beRepaired(10);

	std::cout << std::endl;
	Elouann.attack("Cyprien");
	std::cout << std::endl;

	Cyprien.guardGate();
	std::cout << std::endl;
	Cyprien.guardGate();
	std::cout << std::endl;
}

int main()
{
	//Claptest();

	Scavtest();

	return 0;
}