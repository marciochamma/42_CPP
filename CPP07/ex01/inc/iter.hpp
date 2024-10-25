/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:30:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/25 10:56:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip> // setprecision

// template <typename T, typename F>
// void iter(T* array, size_t length, F func)
// {
// 	for (size_t i = 0; i < length; i++)
// 		func(array[i]);
// }

template <typename T>
void iter(T* array, size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void iter(const T* array, size_t length, void (*func)(const T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void	printElem(const T& elem)
{
	std::cout <<std::fixed <<std::setprecision(1);
	std::cout <<elem <<" ";
}

template <typename T>
void	doubleElem(T& elem)
{
	elem *= 2;
}

template <typename T>
void	replaceElem(T& elem)
{
	for (size_t i = 0; i < elem.size(); i++)
	{
		if (elem[i] == 'l')
			elem[i] = '*';
	}
}

#endif