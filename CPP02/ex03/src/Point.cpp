/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:50:55 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 16:22:22 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const& other)
{
	*this = other;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point&	Point::operator=(Point const& other)
{
	if (this != &other)
	{
		(Fixed&)this->_x = other._x;
		(Fixed&)this->_y = other._y;
	}
	return (*this);
}

Fixed	Point::getPointX(void) const
{
	return (this->_x);
}

Fixed	Point::getPointY(void) const
{
	return (this->_y);
}
