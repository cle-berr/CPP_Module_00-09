/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:23:57 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/10 10:45:43 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int j = 1;j != ac;j++)
	{
		for (int i = 0;av[j][i];i++)
			av[j][i] = toupper(av[j][i]);
		std::cout << av[j];
	}
	std::cout << std::endl;
	return 0;
}