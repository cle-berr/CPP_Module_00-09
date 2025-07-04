/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:20:53 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/03 13:31:50 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{	

	std::cout << "------------SUBJECT TEST-----------" << std::endl;
	std::cout << std::endl;
	
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;

	}
	
	std::cout << std::endl;
	std::cout << "------------MY TEST-----------" << std::endl;
	std::cout << std::endl;
	
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "a : " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "a--: " << a-- << std::endl;
		std::cout << "a: " << a << std::endl;

		Fixed c(a);
		Fixed d = 12;
		std::cout << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;
		std::cout << std::endl;

		std::cout << "a != b -> 1 or a == b -> 0: " << (a != b ? 1 : 0) << std::endl;

		std::cout << "a == c -> 1 or a != c -> 0: " << (a == c ? 1 : 0) << std::endl;

		std::cout << "a >= b -> 1 or a <= b -> 0: " << (a >= b ? 1 : 0) << std::endl;
	
		std::cout << "d <= b -> 1 or d >= b -> 0: " << (d <= b ? 1 : 0) << std::endl;

		std::cout << "a < b -> 1 or a > b -> 0: " << (a < b ? 1 : 0) << std::endl;

		std::cout << "a > b -> 1 or a < b -> 0: " << (a > b ? 1 : 0) << std::endl;

	
		std::cout << std::endl;
		
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "b / 2: " << b / 2 << std::endl;
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "b * 2: " << b * 2 << std::endl;
		std::cout << "b / 0: " << b / 0 << std::endl;
		
		std::cout << std::endl;

		std::cout << "max between a and b: " << Fixed::max( a, b ) << std::endl;
		std::cout << "min between a and b: " << Fixed::min( a, b ) << std::endl;
		
		Fixed::max( a, d ) = Fixed(42.0f);
		std::cout << "d: " << d << std::endl;
		std::cout << "a: " << a << std::endl;
		
		Fixed::min( a, d ) = Fixed(21.0f);
		std::cout << "d: " << d << std::endl;
		std::cout << "a: " << a << std::endl;
		
	}

	return 0;
}