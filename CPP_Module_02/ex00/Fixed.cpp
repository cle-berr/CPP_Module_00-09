/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:20:59 by cle-berr          #+#    #+#             */
/*   Updated: 2025/07/03 13:26:15 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_stock_bits = 8;

Fixed::Fixed(): _stock(0)
{
	std::cout	<< "Default Constructor called\n";
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout	<< "Copy constructor called\n";
	*this = other;
	return;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout	<< "Copy assignment operator called\n";
	if (this != &other)
		this->_stock = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_stock;
}

void Fixed::setRawBits(int const raw) {this->_stock = raw;}