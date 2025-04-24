/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:54:14 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/24 13:29:08 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_weapon != NULL)
		std::cout	<< this->_name << " attacks with their "
					<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attack with noting!\n";
}