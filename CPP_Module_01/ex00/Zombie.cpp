/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:36:22 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/10 15:22:59 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "\033[1;31m" << this->_name << " as been destroy" << "\033[0m" << std::endl;
	return ;
}

void Zombie::announce()
{
	std::cout << "\n" <<this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}