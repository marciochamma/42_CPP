/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:01:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/04 13:20:37 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <stack>

class Rpn
{
private:
	std::stack<double>	_stack;
	std::string	_input;

public:
	Rpn(void); // default constructor
	Rpn(std::string input); // parameter constructor
	Rpn(const Rpn& copy); // copy constructor
	Rpn&	operator=(const Rpn& other); // assignment operator
	~Rpn(void); // destructor

	bool	checkStr(void);
	double		calculator(void);

};

#endif