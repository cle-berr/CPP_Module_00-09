/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:46 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/04 13:57:44 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define GREEN	"\033[1;32m"
#define CYAN	"\033[1;36m"
#define BLUE    "\033[1;34m"
#define MAGENTA	"\033[1;35m"
#define YELLOW 	"\033[1;33m"
#define RED 	"\033[1;31m"
#define PINK	"\033[1;38;2;255;105;180m"
#define RESET	"\033[0m"

class ClapTrap
{
	protected:

		std::string		_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:
	
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

