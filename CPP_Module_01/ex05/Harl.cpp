/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:49:18 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/15 14:55:02 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "There is a room." << std::endl;
}

void Harl::info()
{
	std::cout << "There is a spider in that room." << std::endl;
}

void Harl::warning()
{
	std::cout << "The spider looks angry." << std::endl;
}

void Harl::error()
{
	std::cout << "AAAAAAAAh! The spider is chasing me!" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*harl_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_cmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0;i != 4;i++)
	{
		if (level_cmp[i] == level)
		{
			(this->*harl_ptr[i])();
			break;
		}
	}
}