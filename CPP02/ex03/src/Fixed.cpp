/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:13:41 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 16:19:46 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixedPointNbrValue = 0;
	return ;
}

Fixed::Fixed(int const value)
{
	this->_fixedPointNbrValue = value << Fixed::_fractionalBits;
	return ;
}

Fixed::Fixed(float const value)
{
	this->_fixedPointNbrValue = roundf(value * (1 << Fixed::_fractionalBits));
	return ;
}

Fixed::Fixed(Fixed const& copy)
{
	*this = copy;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

//-------------------------------------------------------

Fixed&	Fixed::operator=(Fixed const& other)
{
	if (this != &other)
		this->_fixedPointNbrValue = other.getRawBits();
	return (*this);
}

//-------------------------------------------------------

bool	Fixed::operator>(Fixed const& other) const
{
	if (this->_fixedPointNbrValue > other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& other) const
{
	if (this->_fixedPointNbrValue < other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& other) const
{
	if (this->_fixedPointNbrValue >= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& other) const
{
	if (this->_fixedPointNbrValue <= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const& other) const
{
	if (this->_fixedPointNbrValue == other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& other) const
{
	if (this->_fixedPointNbrValue != other.getRawBits())
		return (true);
	return (false);
}

//-------------------------------------------------------

Fixed	Fixed::operator+(Fixed const& other) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPointNbrValue + other.getRawBits()));
	return (result);
}

Fixed	Fixed::operator-(Fixed const& other) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPointNbrValue - other.getRawBits()));
	return (result);
}

Fixed	Fixed::operator*(Fixed const& other) const
{
	Fixed	result;

	// result.setRawBits((this->_fixedPointNbrValue * other.getRawBits()) >> Fixed::_fractionalBits);
	result.setRawBits(this->_fixedPointNbrValue * other.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const& other) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPointNbrValue << Fixed::_fractionalBits) / other.getRawBits());
	// result.setRawBits((this->_fixedPointNbrValue) / other.toFloat());
	return (result);
}

//-------------------------------------------------------

Fixed&	Fixed::operator++(void)
{
	this->_fixedPointNbrValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_fixedPointNbrValue++;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_fixedPointNbrValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_fixedPointNbrValue--;
	return (temp);
}

//----------------------------------------------------

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
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
	return (static_cast<float>(this->getRawBits()) / (1 << Fixed::_fractionalBits));
}

std::ostream&	operator<<(std::ostream& output, Fixed const& other)
{
	output << other.toFloat();
	return (output);
}