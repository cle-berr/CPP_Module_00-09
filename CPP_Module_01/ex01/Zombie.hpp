/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:37:14 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/10 15:22:05 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	private:
	
		std::string _name;
	
	public:
	
		Zombie();
		~Zombie();

		void announce(void);
		void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );