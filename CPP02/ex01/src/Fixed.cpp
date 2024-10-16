/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:13:41 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 22:28:58 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixedPointNbrValue = 0;
	std::cout <<"Default constructor called" <<std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout <<"Int constructor called" <<std::endl;
	this->_fixedPointNbrValue = value << Fixed::_fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout <<"Float constructor called" <<std::endl;
	this->_fixedPointNbrValue = roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout <<"Copy constructor called" <<std::endl;
	*this = copy;
}

Fixed::~Fixed(void) // Destructor
{
	std::cout <<"Destructor called" <<std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other) // Copy Assignment Operator
{
	std::cout <<"Copy assignment operator called" <<std::endl;
	if (this != &other)
		this->_fixedPointNbrValue = other.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& output, Fixed const& other)
{
	output << other.toFloat();
	return (output);
}

//----------------------------------------------------

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNbrValue = raw;
}

int	Fixed::getRawBits(void) const
{
    return (this->_fixedPointNbrValue);
}

int	Fixed::toInt() const
{
	return (this->_fixedPointNbrValue >> Fixed::_fractionalBits);
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(this->_fixedPointNbrValue) / (1 << Fixed::_fractionalBits));
}
