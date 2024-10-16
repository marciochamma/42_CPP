/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:22:36 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 22:37:09 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	triangleArea(Point p1, Point p2, Point p3)
{
	Fixed	area;

	// area = (p1.getPointX() * (p2.getPointY() - p3.getPointY()) +
	// 		p2.getPointX() * (p1.getPointY() - p3.getPointY()) +
	// 		p3.getPointX() * (p1.getPointY() - p2.getPointY())) / Fixed(2);

	area = ((p1.getPointX() - p2.getPointX()) * (p1.getPointY() - p3.getPointY()) -
			(p1.getPointY() - p2.getPointY()) * (p1.getPointX() - p3.getPointX())) / Fixed(2.0f); 

	if (area < 0)
		area = area * Fixed(-1);

	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areaTotal;
	Fixed	subArea1;
	Fixed	subArea2;
	Fixed	subArea3;
	Fixed	subAreaTotal;

	areaTotal = triangleArea(a, b, c);
	subArea1 = triangleArea(point, b, c);
	subArea2 = triangleArea(a, point, c);
	subArea3 = triangleArea(a, b, point);
	subAreaTotal = subArea1 + subArea2 + subArea3;

	std::cout	<<"Area Total: " <<areaTotal <<std::endl;
	std::cout	<<"SubArea1: " <<subArea1 <<std::endl;
	std::cout	<<"SubArea2: " <<subArea2 <<std::endl;
	std::cout	<<"SubArea3: " <<subArea3 <<std::endl;
	std::cout	<<"SubAreaTotal: " <<subAreaTotal <<std::endl;

	return (areaTotal == subAreaTotal);
}