/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:01:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/01 12:17:59 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <limits>
#include <map>

class Btc
{
private:
	std::map<std::string, float>	_map;
	std::string	_data;
	std::string	_input;

public:
	Btc(void); // default constructor
	Btc(std::string data, std::string input); // parameter constructor
	Btc(const Btc& copy); // copy constructor
	Btc&	operator=(const Btc& other); // assignment operator
	~Btc(void); // destructor

	bool	checkFiles(void);
	void	loadMap(void);
	bool	checkDate(const std::string& date);
	bool	checkValue(const std::string& value);
	float	getRate(const std::string& date) const;
	void	traverseInput(void);
	

	void	printData(void) const;

};

#endif