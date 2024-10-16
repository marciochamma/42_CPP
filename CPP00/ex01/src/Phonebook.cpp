/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:12:52 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/07 16:19:11 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout <<std::endl;
	std::cout <<"Welcome to Marcio's Phonebook" <<std::endl;
	_currentIndex = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout <<"👋👋👋 Bye!" <<std::endl <<std::endl;
}

std::string	Phonebook::getInput(const std::string &prompt)
{
	std::string str;
	do {
		std::cout <<prompt;
		std::getline(std::cin, str);
	} while (str.empty());
	return (str);
}

void Phonebook::add(void)
{
	this->_list[_currentIndex].setFname(getInput("Enter First Name: "));
    this->_list[_currentIndex].setLname(getInput("Enter Last Name: "));
    this->_list[_currentIndex].setNick(getInput("Enter Nickname: "));
    this->_list[_currentIndex].setPhone(getInput("Enter Phone Number: "));
    this->_list[_currentIndex].setSecret(getInput("Enter the Darkest Secret: "));

	this->_currentIndex = (this->_currentIndex + 1) % 8;
}

void Phonebook::print(char index)
{
	std::string label[4];

	label[0] =  index;
	label[1] =  this->_list[(index - '0') - 1].getFname();
	label[2] =  this->_list[(index - '0') - 1].getLname();
	label[3] =  this->_list[(index - '0') - 1].getNick();
    
    for (int i = 0; i < 4; i++)
	{
		std::cout <<"|";
        
		if (label[i].length() > 10)
			std::cout <<std::setw(10) <<label[i].substr(0, 9) + ".";
		else
			std::cout <<std::setw(10) <<label[i];
    }
    std::cout <<"|" <<std::endl;
}

void	Phonebook::search(void)
{
	std::string	index;

	if (this->_list[0].getFname().size() == 0)
	{
		std::cout <<"The phonebook is empty" <<std::endl;
		return ;
	}
	
	int i = 0;
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|\n";
	while (i < 8)
	{
		print(i + '1');
		i++;
	}
	
	std::cout <<"\nEnter the index: ";
	std::getline(std::cin, index);

    if (index.size() != 1 || index[0] < '1' || index[0] > '8' 
		|| this->_list[(index[0] - '0') - 1].getFname().empty())
		std::cout <<"Invalid or empty index" <<std::endl;
	else
	{
		std::cout <<"First Name: " <<this->_list[(index[0] - '0') - 1].getFname() <<std::endl;
		std::cout <<"Last Name: " <<this->_list[(index[0] - '0') - 1].getLname() <<std::endl;
		std::cout <<"Nickname: " <<this->_list[(index[0] - '0') - 1].getNick() <<std::endl;
		std::cout <<"Phone Number: " <<this->_list[(index[0] - '0') - 1].getPhone() <<std::endl;
		std::cout <<"Darkest Secret: " <<this->_list[(index[0] - '0') - 1].getSecret() <<std::endl;
	}
}
