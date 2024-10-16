/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:41:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 16:21:10 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const& other);
	~Point(void);
	
	Point&	operator=(Point const& other);

	Fixed	getPointX(void) const;
	Fixed	getPointY(void) const;

};

Fixed	triangleArea(Point p1, Point p2, Point p3);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
