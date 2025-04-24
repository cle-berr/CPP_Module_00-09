/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:34:44 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/22 15:08:58 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "Unknown";
	std::cout << "\033[32mClapTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << "\033[32mClapTrap constructor as been called for " << _name << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "\033[33mClapTrap constructor copy as been called" << "\033[0m" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31mClapTrap destructor as been called for " << _name << "\033[0m" << std::endl;
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
		std::cout << "ClapTrap " << _name << " can't attack <not enough energy>. " << target << " didn't take any damage." << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "\033[37mClapTrap " << _name << " can't attack <he is dead>. " << target << " didn't take any damage." << std::endl;
		return ;
	}
	
	std::cout << "\033[35mClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "\033[30mClapTrap " << _name << " is already dead. Why keep attacking?\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[36mClapTrap " << _name << " takes " << amount << " points of damage. ";
	_hitPoints -= amount;
	std::cout << _hitPoints << " hit points left.\033[0m" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "\033[31mClapTrap " << _name << " is now dead.\033[0m" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't be repaired <not enough energy>." << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't be repaired <he is dead>. " << std::endl;
		return ;
	}
	std::cout << "\033[32mClapTrap " << _name << " is repaired by " << amount << " hit points.";
	_hitPoints += amount;
	std::cout << " Now has " << _hitPoints << " hit points.\033[0m" << std::endl;
	_energyPoints--;
}
