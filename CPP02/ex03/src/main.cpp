/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 22:43:39 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(5, 0);
	Point	c(0, 5);
	Fixed	area;
	bool	eval;

	std::cout <<"Triangle: (0, 0) (5, 0) (0, 5)\n";


	// Check inside
	Point	p(1,1);
	std::cout <<std::endl;
	std::cout <<"point (1, 1)\n";
	eval =  bsp(a, b, c, p);
	std::cout <<"is inside = " <<eval <<std::endl;

	// Check over the line
	p = Point(0,4);
	std::cout <<std::endl;
	std::cout <<"point (0, 4)\n";
	eval =  bsp(a, b, c, p);
	std::cout <<"is inside = " <<eval <<std::endl;

	// Check over the vertice
	p = Point(0,5);
	std::cout <<std::endl;
	std::cout <<"point (0, 5)\n";
	eval =  bsp(a, b, c, p);
	std::cout <<"is inside = " <<eval <<std::endl;

	// Check the outside1
	p = Point(5,5);
	std::cout <<std::endl;
	std::cout <<"point (5, 5)\n";
	eval =  bsp(a, b, c, p);
	std::cout <<"is inside = " <<eval <<std::endl;

	// Check the outside2
	p = Point(0,-1);
	std::cout <<std::endl;
	std::cout <<"point (0, -1)\n";
	eval =  bsp(a, b, c, p);
	std::cout <<"is inside = " <<eval <<std::endl;

	return (0);
}