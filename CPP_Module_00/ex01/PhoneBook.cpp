/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:19:43 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/22 14:18:09 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
    return;
}

void PhoneBook::add_contact_in_phonebook()
{
	if (this->_index < 8)
	{
		this->_Phonebook[this->_index].add_contact();
		this->_index++;
	}
	else
	{
		for(int i = 1; i < 8; i++)
			this->_Phonebook[i -1] = this->_Phonebook[i];
		this->_Phonebook[7].add_contact();
	}
}

void PhoneBook::get_contact_infos()
{
	std::string input;

	if (this->_index == 0)
	{
		std::cout << "|--No one is registered in the phonebook !--|\n";
		return;
	}
	std::cout << "|--Index---|First Name|-LastName-|-Nickname-|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_index; i++)
		this->_Phonebook[i].get_infos(i + 1);
	while(42)
	{
		std::cout << "|------Choose a index between 1 and 8-------|\n";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "|--------------See you later !--------------|" << std::endl;
			exit(0);
		}
		if (input.length() != 1)
			std::cout << "|------I said a number between 1 and 8------|" << std::endl;
		else if ('1' <= input[0] && input[0] <= '8')
		{
			if (this->_index < input[0] - '0')
				std::cout << "|-------This contact does not exist.--------|" << std::endl;
			else
				break;
		}
		else
			std::cout << "|------I said a number between 1 and 8------|" << std::endl;
	}
	this->_Phonebook[input[0] - '0' - 1].get_all_infos();
	return ;
}
