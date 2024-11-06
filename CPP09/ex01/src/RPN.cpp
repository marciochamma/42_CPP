/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:49:32 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/04 13:47:39 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(void) : _input()
{
	// std::cout <<"Rpn: default constructor" <<std::endl;
	return ;
}

Rpn::Rpn(std::string input) : _input(input)
{
	// std::cout <<"Rpn: parameter constructor" <<std::endl;
	return ;
}

Rpn::Rpn(const Rpn& copy)
{
	this->_input = copy._input;
	this->_stack = copy._stack;
	// std::cout <<"Rpn: copy constructor" <<std::endl;
	return ;
}

Rpn&	Rpn::operator=(const Rpn& other)
{
	if (this != &other)
	{
		this->_input = other._input;
		this->_stack = other._stack;
	}
	// std::cout <<"Rpn: assignment operator" <<std::endl;
	return (*this);
}

Rpn::~Rpn(void)
{
	// std::cout <<"Rpn: destructor" <<std::endl;
	return ;
}

bool	isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	Rpn::checkStr(void)
{
	if (this->_input.empty())
		return (false);

	if (this->_input.length() < 5)
		return (false);

	if (!isdigit(this->_input[0]) || this->_input[1] != ' ' ||
		!isdigit(this->_input[2]) || this->_input[3] != ' ' ||
		this->_input[this->_input.length() - 1] == ' ')
		return (false);

	for (size_t i = 4; i < this->_input.size(); ++i)
	{
		char cChar = this->_input[i];
		if (!std::isdigit(cChar) && cChar != ' ' &&
			!isOperator(cChar))
			return (false);

		if ((cChar != ' ' && this->_input[i - 1] != ' ') || 
			(cChar == ' ' && this->_input[i - 1] == ' '))
			return (false);
	}
	
	int countDigit = 0, countOperator = 0;
	for (size_t j = 0; j < this->_input.size(); ++j)
	{
		if (isdigit(this->_input[j]))
			countDigit++;
		else if (isOperator(this->_input[j]))
			countOperator++;
		if (countOperator >= countDigit)
			return (false);
	}
	if (countOperator != countDigit - 1)
		return (false);
	
	return (true);
}

int	charToInt(char c)
{
	std::stringstream ss;
	ss << c;
	int nbr;
	ss >> nbr;
	if (ss.fail())
		throw std::invalid_argument("Error: value poka yoke");
	return (nbr);
}

double	Rpn::calculator(void)
{
	if (!checkStr())
		throw std::invalid_argument("Error");
	
	int elem1, elem2;
	
	for (size_t i = 0; i < this->_input.size(); ++i)
	{
		if (isdigit(this->_input[i]))
			this->_stack.push(charToInt(this->_input[i]));

		else if (isOperator(this->_input[i]))
		{
			elem2 = this->_stack.top();
			this->_stack.pop();
			elem1 = this->_stack.top();
			this->_stack.pop();

			switch (this->_input[i])
			{
			case '+':
				this->_stack.push(elem1 + elem2);
				break;
			case '-':
				this->_stack.push(elem1 - elem2);
				break;
			case '*':
				this->_stack.push(elem1 * elem2);
				break;
			case '/':
				if (elem2 == 0)
					throw std::invalid_argument("Error: division by zero");
				this->_stack.push(elem1 / elem2);
				break;
			default:
				throw std::invalid_argument("Error: operation poka yoke");
			}
		}
	}
	
	return (this->_stack.top());
}
