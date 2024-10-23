/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:56:26 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 14:45:56 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout <<"ScalarConverter : default constructor" <<std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
	std::cout <<"ScalarConverter : copy constructor" <<std::endl;
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout <<"ScalarConverter : destructor" <<std::endl;
	return ;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	std::cout <<"ScalarConverter : assignment operator" <<std::endl;
	return (*this);
}

void ScalarConverter::convert(const std::string& input)
{
	bool (*Ptr[5])(const std::string&) = {&isChar, &isInt, &isFloat, &isDouble, &isPseudoLiteral};

	for (int i = 0; i < 5; i++)
	{
		if ((*Ptr[i])(input))
		{
			convertToChar(input, i);
			convertToInt(input, i);
			convertToFloat(input, i);
			convertToDouble(input, i);
			return ;
		}
	}
	std::cout <<"Impossible conversion: Unkown input type" <<std::endl;
}

// --------------------------------------------------

bool	isChar(const std::string& str)
{
	if (str.length() != 1 || std::isdigit(str[0]))
		return (false);
	
	if (!std::isprint(str[0]))
	{
		std::cout <<"Input contain non-displayable char" <<std::endl;
		return (false);
	}
	
	return (true);
}

bool	isInt(const std::string& str)
{
	std::istringstream	iss(str);
	int	validInt;
	return (iss >> validInt && iss.eof());
}

bool	isFloat(const std::string& str)
{
	if (str.find(".") == std::string::npos)
		return (false);

	if (str[str.size() - 1] != 'f')
		return (false);

	std::istringstream iss(str.substr(0, str.size() - 1));
	float validFloat;
	return (iss >> validFloat && iss.eof());
}

bool	isDouble(const std::string& str)
{
	if (str.find(".") == std::string::npos)
		return (false);

	if (str[str.size() - 1] == 'f')
		return (false);

	std::istringstream iss(str);
	double validDouble;
	return (iss >> validDouble && iss.eof());
}

bool	isPseudoLiteral(const std::string& str)
{
	return (str == "+inf" || str == "+inff" ||
		str == "-inf" || str == "-inff" ||
		str == "nan" || str == "nanf");	
}

// --------------------------------------------------

double	getRef(const std::string& str)
{
	double num;
	std::istringstream iss;

	if (str[str.size() - 1] == 'f')
		iss.str(str.substr(0, str.size() - 1));
	else
		iss.str(str);
	iss >> num;

	return (num);
}

void convertToChar(const std::string& str, int type)
{
	double ref = getRef(str);

	if (type == 0)
		std::cout <<"char: '" <<str[0] <<"'" <<std::endl;

	else if (type == 4)
		std::cout <<"char: " <<"impossible" <<std::endl;

	else if (ref < std::numeric_limits<char>::min() || ref > std::numeric_limits<char>::max())
		std::cout <<"char: impossible" << std::endl;
	
	else if (std::isprint(static_cast<char>(ref)))
		std::cout <<"char: '" <<static_cast<char>(ref) <<"'" << std::endl;

	else
		std::cout <<"char: Non displayable" <<std::endl;

	return ;
}

void convertToInt(const std::string& str, int type)
{
	double ref = getRef(str);

	if (type == 0)
		std::cout <<"int: " <<static_cast<int>(str[0]) <<std::endl;

	else if (type == 4)
		std::cout <<"int: " <<"impossible" <<std::endl;

	else if (ref < std::numeric_limits<int>::min() || ref > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;

	else
		std::cout <<"int: " <<static_cast<int>(ref) <<std::endl;
	
	return ;
}

void convertToFloat(const std::string& str, int type)
{
	double ref = getRef(str);

	if (type == 0)
		std::cout <<"float: " <<static_cast<float>(str[0]) <<".0f" <<std::endl;

	else if (type == 4)
	{
		if (str.substr(0, 3) == "nan")
			std::cout <<"float: " <<str.substr(0, 3) + "f" <<std::endl;
		else
			std::cout <<"float: " <<str.substr(0, 4) + "f" <<std::endl;
	}

	else if (ref < -std::numeric_limits<float>::max() || ref > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;

	else
		std::cout <<std::fixed <<std::setprecision(1) 
			<<"float: " <<static_cast<float>(ref) <<"f" <<std::endl;	

	return ;
}

void convertToDouble(const std::string& str, int type)
{
	double ref = getRef(str);

	if (type == 0)
		std::cout <<"double: " <<static_cast<double>(str[0]) <<".0" <<std::endl;
	
	else if (type == 4)
	{
		if (str.substr(0, 3) == "nan")
			std::cout <<"double: " <<str.substr(0, 3) <<std::endl;
		else
			std::cout <<"double: " <<str.substr(0, 4) <<std::endl;
	}

	else if (ref < -std::numeric_limits<double>::max() || ref > std::numeric_limits<double>::max())
		 std::cout << "double: impossible" << std::endl;
	
	else
		std::cout <<std::fixed <<std::setprecision(1) 
			<<"double: " <<static_cast<double>(ref) <<std::endl;

	return ;
}
