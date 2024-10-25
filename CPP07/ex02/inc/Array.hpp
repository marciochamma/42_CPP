/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:30:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/24 17:31:37 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip> // setprecision

template <typename T>
class Array
{
private:
	T*				_elements;
	unsigned int	_size;
	std::string		_constructorType;

public:
	Array(void); // default constructor
	Array(unsigned int n); // parameter constructor
	Array(const Array& copy); // copy constructor
	~Array(void); // destructor

	Array&		operator=(const Array& other);
	T& 			operator[](unsigned int index);
	const T&	operator[](unsigned int index) const;

	void	size(void) const;

	void	printArray(void);
};

#include "Array.tpp"

#endif