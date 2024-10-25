/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:22:12 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/25 19:26:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void): _elements(NULL), _size(0)
{
	this->_constructorType = "default";
	std::cout <<"Array: default constructor" <<std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _elements(new T[n]), _size(n)
{
	this->_constructorType = "parameter";
	std::cout <<"Array: parameter constructor" <<std::endl;
	return ;
}

template <typename T>
Array<T>::Array(const Array& copy): _elements(new T[copy._size]), _size(copy._size)
{
	this->_constructorType = "copy";
	for (unsigned int i = 0; i < copy._size; i++)
		this->_elements[i] = copy._elements[i];
	std::cout <<"Array: copy constructor" <<std::endl;
	return ;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->_elements;
	std::cout <<this->_constructorType <<" -> ";
	std::cout <<"Array: destructor" <<std::endl;
	return ;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		this->_constructorType = "operator";
		this->_size = other._size;
		delete[] this->_elements;
		this->_elements = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_elements[i] = other._elements[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return (this->_elements[index]);
}

template <typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return (this->_elements[index]);
}

template <typename T>
void	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
void	Array<T>::printArray(void)
{
	for(unsigned int i = 0; i < this->_size; i++)
		std::cout <<this->_elements[i] <<" ";
	std::cout <<std::endl;
}
