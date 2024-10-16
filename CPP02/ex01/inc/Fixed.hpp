/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:51:05 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 15:31:42 by mchamma          ###   ########.fr       */
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
	Fixed(const int value); // integer constructor
	Fixed(const float value); // float constructor
	Fixed(const Fixed& copy); // copy contructor
	~Fixed(void); // destructor

	Fixed& operator=(const Fixed& other); // operator= overload

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& other);

#endif