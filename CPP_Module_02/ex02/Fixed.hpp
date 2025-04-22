/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:20:56 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/18 12:59:53 by cle-berr         ###   ########.fr       */
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
		
		bool	operator>(Fixed other)const;
		bool	operator<(Fixed other)const;
		bool	operator>=(Fixed other)const;
		bool	operator<=(Fixed other)const;
		bool	operator==(Fixed other)const;
		bool	operator!=(Fixed other)const;
	
		float	operator+(Fixed other)const;
		float	operator-(Fixed other)const;
		float	operator*(Fixed other)const;
		float	operator/(Fixed other)const;
	
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		int toInt(void) const;
		float toFloat(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
		static	Fixed &min(Fixed &first, Fixed &second);
		static	Fixed &max(Fixed &first, Fixed &second);
		static	const Fixed &min(Fixed const &first, Fixed const &second);
		static	const Fixed &max(Fixed const &first, const Fixed &second);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &other);