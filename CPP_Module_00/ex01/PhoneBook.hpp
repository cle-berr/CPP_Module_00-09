/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:20:10 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/06 17:03:40 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _Phonebook[8];
		int		_index;
	
	public:
	
	PhoneBook();
	~PhoneBook();

	void	add_contact_in_phonebook();
	void	get_contact_infos();
	
};