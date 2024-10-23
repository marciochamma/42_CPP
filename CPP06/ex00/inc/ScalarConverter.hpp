/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:46:55 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 13:59:12 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip> // for setprecision
#include <limits> // for numeric_limits

class ScalarConverter
{
private:
	ScalarConverter(void); // default constructor
	ScalarConverter(const ScalarConverter& copy); // copy constructor
	~ScalarConverter(void); // destructor
	ScalarConverter&	operator=(const ScalarConverter& other);

public:
	static void		convert(const std::string& input);
};

bool	isChar(const std::string& str);
bool	isInt(const std::string& str);
bool	isFloat(const std::string& str);
bool	isDouble(const std::string& str);
bool	isPseudoLiteral(const std::string& str);

double	getRef(const std::string& str);
void	convertToChar(const std::string& str, int type);
void	convertToInt(const std::string& str, int type);
void	convertToFloat(const std::string& str, int type);
void	convertToDouble(const std::string& str, int type);

#endif