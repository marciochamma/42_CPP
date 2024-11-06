/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:11:32 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/04 12:29:36 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(void) : _data(), _input()
{
	// std::cout <<"Btc: default constructor" <<std::endl;
	return ;
}

Btc::Btc(std::string data, std::string input) :
	_data(data), _input(input)
{
	// std::cout <<"Btc: parameter constructor" <<std::endl;
	return ;
}

Btc::Btc(const Btc& copy)
{
	this->_data = copy._data;
	this->_input = copy._input;
	this->_map = copy._map;
	// std::cout <<"Btc: copy constructor" <<std::endl;
	return ;
}

Btc&	Btc::operator=(const Btc& other)
{
	if (this != &other)
	{
		this->_data = other._data;
		this->_input = other._input;
		this->_map = other._map;
	}
	// std::cout <<"Btc: assignment operator" <<std::endl;
	return (*this);
}

Btc::~Btc(void)
{
	// std::cout <<"Btc: destructor" <<std::endl;
	return ;
}

bool	Btc::checkFiles()
{
	if (this->_input != "input.txt" && this->_input != "input.csv")
	{
		std::cerr << "Error: incorrect filename.\n";
		return (false);
	}
	
	std::ifstream	dataFile(this->_data.c_str());
	std::ifstream	inputFile(this->_input.c_str());
	
	if (!dataFile.is_open() || !inputFile.is_open())
	{
		std::cerr << "Error: could not open file.\n";
		return (false);
	}

	std::string	dataLine;
	std::string	inputLine;

	if (std::getline(dataFile, dataLine) && std::getline(inputFile, inputLine))
	{
		if (dataLine != "date,exchange_rate" || inputLine != "date | value")
		{
			std::cerr << "Error: incorrect first line.\n";
			return (false);		
		}
	}
	else
	{
		std::cerr << "Error: cannot read the file.\n";
		return (false);	
	}	

	dataFile.close();
	inputFile.close();
	return (true);
}

bool	isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool	Btc::checkDate(const std::string& date)
{
	if (date.empty())
		return (false);

	for (size_t i = 0; i < date.size(); i++)
	{
		if (!std::isdigit(date[i]) && date[i] != '-')
			return (false);
	}

	if (date[0] == '-' || date[date.size() - 1] == '-')
		return (false);
		
	if (std::count(date.begin(), date.end(), '-') > 2)
			return (false);
	
	std::istringstream ss(date);
	int year, month, day;
	char dash1, dash2;

	if (ss >> year >> dash1 >> month >> dash2 >> day &&
		dash1 == '-' && dash2 == '-')
	{
		if (year > 0 && month > 0 && month <= 12)
		{
			int daysInMonth[] = 
				{0, 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
			return (day > 0 && day <= daysInMonth[month]);
		}		
	}
	return (false);
}

bool	Btc::checkValue(const std::string& value)
{
	if (value.empty())
		return (false);
	
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!std::isdigit(value[i]) && value[i] != '.' && value[0] != '-' && value[0] != '+')
			return (false);
	}
	return (true);
}

float strToFloat(const std::string &str)
{
	std::stringstream ss(str);
	float result;
	ss >> result;
	if (ss.fail())
		throw std::invalid_argument("Error: value poka yoke");
	return (result);
}

void	Btc::loadMap(void)
{
	std::ifstream	dataFile(this->_data.c_str());
	std::string		header, line, key, value;
	size_t			pos;

	std::getline(dataFile, header);
	while(std::getline(dataFile, line))
	{
		pos = line.find(",");
		key = line.substr(0, pos);
		value = line.substr(pos + 1);
		
		if (!checkDate(key))
			throw std::invalid_argument("Error: data date not valid");

		if (!checkValue(value))
			throw std::invalid_argument("Error: data value not valid");

		this->_map[key] = strToFloat(value);
	}
	dataFile.close();
	return ;
}

void	Btc::printData(void) const
{
	int count = 0;
	
	std::cout << "Date --> Rate" << std::endl;
	std::map<std::string, float>::const_iterator	it;
	for (it = this->_map.begin(); it != this->_map.end(); ++it)
	{
		if (count++ > 1605)
			std::cout <<std::fixed <<std::setprecision(2) 
				<<it->first <<" --> " <<it->second <<std::endl;	
	}
	
}

float	Btc::getRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator	it;

	// starts here: lower_bound command finds the 1s date later than date (input)
	it = this->_map.lower_bound(date);

	// if it reach the end or it point to date 'really' later than date (input)
	if (it == this->_map.end() || it->first > date) 
		// and it is not pointing to the begginning
		if (it != this->_map.begin())
			// it have to back to previous iterator
			--it;
	return (it->second);	
}

std::string trim(const std::string& str)
{
	size_t first = str.find_first_not_of(" \t\n\r\f\v");
	if (first == std::string::npos)
		return ("");
	size_t last = str.find_last_not_of(" \t\n\r\f\v");
	
	return (str.substr(first, last - first + 1));
}

std::string	formatNumber(float nbr)
{
	std::ostringstream	out;
	out << std::fixed << std::setprecision(2) << nbr;
	std::string	str = out.str();
	
	if (str.find('.') != std::string::npos)
	{
		int	end = str.length() - 1;
		while (end > 0 && (str[end] == '0' || str[end] == '.'))
		{
			if (str[end] == '.')
			{
				--end;
				break ;

			}
			--end;
		}
		str = str.substr(0, end + 1);
	}	
	return (str);
}

void	Btc::traverseInput(void)
{
	std::ifstream	inputFile(this->_input.c_str());
	std::string		header, line;

	std::getline(inputFile, header);
	while (std::getline(inputFile, line))
	{
		std::istringstream	ss(line);
		std::string			key, value;

		std::getline(ss, key, '|');
		std::getline(ss, value);

		key = trim(key);
		value = trim(value);

		if (line.empty())
		{
			std::cerr <<"Error: empy line." <<std::endl;
			continue ;
		}

		if (!checkDate(key) || !checkValue(value))
		{
			std::cerr <<"Error: Bad Input => " <<line <<std::endl;
			continue ;
		}

		if (strToFloat(value) < 0)
		{
			std::cerr <<"Error: not a positive number." <<std::endl;
			continue ;
		}
		
		if (strToFloat(value) > 1000)
		{
			std::cerr <<"Error: too large a number." <<std::endl;
			continue ;
		}

		float	valueF = strToFloat(value);
		// std::cout <<std::fixed <<std::setprecision(2)
		// 	<<key	<<" => " <<valueF <<" = " <<getRate(key) * valueF <<std::endl;

		std::cout <<key	<<" => " <<formatNumber(valueF) <<" = " 
			<<formatNumber(getRate(key) * valueF) <<std::endl;

	}
}

