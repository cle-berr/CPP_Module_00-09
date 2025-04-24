/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:03:10 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/24 11:16:39 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = "Unknown";
	std::cout << "\033[32mFragTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = name;
	std::cout << "\033[32mFragTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "\033[33mFragTrap constructor copy as been called" << "\033[0m" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31mFragTrap destructor as been called for " << _name << "\033[0m" << std::endl;
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
	std::cout << "Hey Guys, high five with me " << this->_name << "\n";
}