/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:46 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/01 10:05:37 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

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

