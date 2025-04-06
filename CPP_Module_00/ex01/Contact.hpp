/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:03:09 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/06 18:01:34 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <string>

class Contact {
        private:
                std::string _field_name[5];
                std::string _info[5];
        
        public:
        
        Contact();
        ~Contact();

        void add_contact();
        void get_infos(int index);
        void get_all_infos();
};