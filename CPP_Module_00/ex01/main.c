/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:15:03 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/05 16:20:26 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string input;

    while(1)
    {
        std::cout << "-------------------------------\n"
                  << "------------Hello--------------\n"
                  << "---------you can use-----------\n"
                  << "---ADD for adding a contact----\n"
                  << "--SEARCH for search a contact--\n"
                  << "---EXIT to exit the program----\n"
                  << "-------------------------------\n"
                  << "Waiting for your command: ";
        std::getline(std::cin,input);
        if (std::cin.eof())
            break;
        if (input.compare("EXIT") == 0)
            break;
        else if (input.compare("SEARCH") == 0)
            PhoneBook.get_contact_infos();
        else if (input.compare("ADD") == 0)
            PhoneBook.add_contact_in_phonebook();
    }
    std::cout << "---Thanks for using me, Bye----" << std::endl;
	return 0;
}