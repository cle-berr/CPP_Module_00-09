/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:55:00 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/14 15:05:09 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	private:

		std::string _type;

	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType();
		void				setType(std::string type);
};
