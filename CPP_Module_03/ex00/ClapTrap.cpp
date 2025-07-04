/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:44 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/04 13:49:15 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "Unknown";
	std::cout << YELLOW << "ClapTrap " << GREEN << "constructor as been called for " << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << YELLOW << "ClapTrap " << GREEN << "constructor as been called for " << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << YELLOW << "ClapTrap " << GREEN << "copy constructor as been called" << RESET << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "ClapTrap " << RED << "destructor as been called" << RESET << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << RED << _name <<" can't attack <not enough energy>. " << MAGENTA << target << " didn't take any damage." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << RED << _name << " can't attack <he is dead>. " << MAGENTA << target << " didn't take any damage." << RESET << std::endl;
		return ;
	}
	
	std::cout << YELLOW << "ClapTrap " << BLUE << _name << " attacks " << target << MAGENTA << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << RED << _name << " is already dead." << PINK << "Why keep attacking?" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "ClapTrap " << CYAN << _name << " takes " << amount << " points of damage. ";
	_hitPoints -= amount;
	std::cout << RED << _hitPoints << " hit points left." << RESET << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << RED << _name << " is now dead." << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " can't be repaired <not enough energy>." << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << _name << " can't be repaired <he is dead>. " << std::endl;
		return ;
	}
	std::cout << YELLOW << "ClapTrap " << GREEN << _name << " is repaired by " << amount << " hit points.";
	_hitPoints += amount;
	std::cout << " Now has " << _hitPoints << " hit points." << RESET << std::endl;
	_energyPoints--;
}
