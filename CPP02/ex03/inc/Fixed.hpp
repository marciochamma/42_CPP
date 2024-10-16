/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:51:05 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 16:18:06 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedPointNbrValue;
	static const int	_fractionalBits = 8;

public:
	Fixed(void); // default constructor
	Fixed(int const value); // integer constructor
	Fixed(float const value); // float constructor
	Fixed(Fixed const& other); // copy contructor
	~Fixed(void); // destructor

	Fixed&	operator=(Fixed const& other); // operator =
	bool	operator>(Fixed const& other) const; // operator >
	bool	operator<(Fixed const& other) const; // operator <
	bool	operator>=(Fixed const& other) const; // operator >=
	bool	operator<=(Fixed const& other) const; // operator <=
	bool	operator==(Fixed const& other) const; // operator ==
	bool	operator!=(Fixed const& other) const; // operator !=
	
	Fixed	operator+(Fixed const& other) const; // operator +
	Fixed	operator-(Fixed const& other) const; // operator -
	Fixed	operator*(Fixed const& other) const; // operator *
	Fixed	operator/(Fixed const& other) const; // operator /

	Fixed&	operator++(void); // operator Pre-Increment
	Fixed	operator++(int); // operator Post-Increment
	Fixed&	operator--(void); // operator Pre-Decrement
	Fixed	operator--(int); // operator Post-Decrement

	static Fixed const&	min(Fixed const& a, Fixed const& b); // operator min const
	static Fixed&	min(Fixed& a, Fixed& b); // operator min
	static Fixed const&	max(Fixed const& a, Fixed const& b); // operator max const
	static Fixed&	max(Fixed& a, Fixed& b); // operator max

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;

};

std::ostream&	operator<<(std::ostream& o, Fixed const& other);

#endif