/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:13:41 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 22:26:33 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout <<"Default constructor called" <<std::endl;
	this->_fixedPointNbrValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout <<"Copy constructor called" <<std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout <<"Copy assignment operator called" <<std::endl;
	if (this != &other)
		this->_fixedPointNbrValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout <<"Destructor called" <<std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout <<"setRawBits member function called" <<std::endl;
	this->_fixedPointNbrValue = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout <<"getRawBits member function called" <<std::endl;
    return (this->_fixedPointNbrValue);
}