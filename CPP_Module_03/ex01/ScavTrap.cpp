/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:32:51 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/04 14:09:29 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = "Unknown";
	this->_guardingGate = false;
	std::cout << MAGENTA << "ScavTrap" << GREEN << " constructor as been called for " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	this->_guardingGate = false;
	std::cout << MAGENTA << "ScavTrap" << GREEN << " constructor as been called for " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << MAGENTA << "ScavTrap" << GREEN << " constructor copy as been called" << RESET << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << MAGENTA << "ScavTrap" << RED << " destructor as been called for " << _name << RESET << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << MAGENTA << "ScavTrap " << RED << _name << " can't attack <not enough energy>. " << MAGENTA << target << " didn't take any damage." << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << MAGENTA << "ScavTrap " << RED << _name << " can't attack <he is dead>. " << MAGENTA << target << " didn't take any damage." << std::endl;
		return ;
	}
	
	std::cout << MAGENTA << "ScavTrap " << BLUE << _name << " attacks " << target << MAGENTA << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	if (this->_guardingGate == true)
	{
		std::cout << MAGENTA << "ScavTrap " << PINK << _name << " is allready in guarding mode" << RESET << std::endl;
		return ;
	}
	std::cout << MAGENTA << "ScavTrap " << CYAN << _name << " is now in guarding mode" << RESET << std::endl;
	this->_guardingGate = true;
}