/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:37:14 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/10 14:45:25 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
	
		std::string _name;
	
	public:
	
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);