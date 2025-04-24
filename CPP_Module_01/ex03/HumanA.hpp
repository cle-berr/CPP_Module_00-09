/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:55:08 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/24 13:21:53 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	private:

		Weapon &_weapon;
		std::string _name;

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void attack();
};
