/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:49:22 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/15 15:18:16 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Why execute if you dont have problems !\n";
		return 1;
	}
	std::string level = argv[1];
	std::string level_cmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int result = -1;
	for (int i = 0;i < 4;i++)
		if ( level.compare(level_cmp[i]) == 0)
			result = i;
	switch (result)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(level_cmp[0]);

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(level_cmp[1]);

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(level_cmp[2]);

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(level_cmp[3]);
			break;
	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
} 