/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:36:57 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/03 09:31:52 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name); // Allocation sur la stack
	zombie.announce();
	
	// Zombie *zombie; // Allocation sur le heap
	// zombie = newZombie(name);
	// zombie->announce();
	// delete zombie;

	return;
}