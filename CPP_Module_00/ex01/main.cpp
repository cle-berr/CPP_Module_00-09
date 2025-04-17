/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:15:03 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/09 12:55:34 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phonebook;

    while(1)
    {
        std::cout << "|-------------------------------------------|\n"
                  << "|------------------Hello--------------------|\n"
                  << "|---------------you can use-----------------|\n"
                  << "|---------ADD for adding a contact----------|\n"
                  << "|--------SEARCH for search a contact--------|\n"
                  << "|---------EXIT to exit the program----------|\n"
                  << "|-------------------------------------------|\n"
                  << "|---------Waiting for your command:---------|\n"
                  << "|->";
        std::getline(std::cin,input);
        if (std::cin.eof())
        {
            std::cout << "\n";
            break;
        }
        if (input.length() <= 0)
        {
			std::cout << "\033[31m|----------Please enter Something !---------|\033[0m\n";
            continue;
        }
        if (input.compare("EXIT") == 0)
            break;
        else if (input.compare("SEARCH") == 0)
            phonebook.get_contact_infos();
        else if (input.compare("ADD") == 0)
            phonebook.add_contact_in_phonebook();
    }
    std::cout << "|---------Thanks for using me, Bye----------|" << std::endl;
	return 0;
}
