/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:39:31 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/24 11:12:52 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
	
		FragTrap();
		virtual ~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);

		void highFiveGuys();

		FragTrap &operator=(const FragTrap &other);
};
