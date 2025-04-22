/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:20:56 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/18 12:31:27 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{

	private:
	
		int _stock;
		static const int _stock_bits;
	
	public:
	
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &other);
		
		Fixed &operator=(const Fixed &other);
		
		~Fixed();
		
		float toFloat(void) const;
		int toInt(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &other);