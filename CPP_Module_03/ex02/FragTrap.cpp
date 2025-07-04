/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:03:10 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/04 14:15:31 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = "Unknown";
	std::cout << BLUE << "FragTrap" << GREEN << " constructor as been called for " << _name << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = name;
	std::cout << BLUE << "FragTrap" << GREEN << " constructor as been called for " << _name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << BLUE << "FragTrap" << GREEN << " constructor copy as been called" << RESET << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << BLUE << "FragTrap" << RED << " destructor as been called for " << _name << RESET << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	return *this;
}

void FragTrap::highFiveGuys()
{
	std::cout << BLUE << "FragTrap" << PINK << " Hey Guys, high five with me " << this->_name << "\n";
}