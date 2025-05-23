/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:32:51 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/24 09:34:43 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = "Unknown";
	std::cout << "\033[32mScavTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_name = name;
	std::cout << "\033[32mScavTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "\033[33mScavTrap constructor copy as been called" << "\033[0m" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mScavTrap destructor as been called for " << _name << "\033[0m" << std::endl;
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
		std::cout << "ScavTrap " << _name << " can't attack <not enough energy>. " << target << " didn't take any damage." << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "\033[37mScavTrap " << _name << " can't attack <he is dead>. " << target << " didn't take any damage." << std::endl;
		return ;
	}
	
	std::cout << "\033[35mScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	if (this->_guardingGate == true)
	{
		std::cout << "\033[33mScavTrap " << _name << " is allready in guarding mode" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[33mScavTrap " << _name << " is now in guarding mode" << "\033[0m" << std::endl;
	this->_guardingGate = true;
}