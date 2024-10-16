/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:36:38 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/12 16:36:55 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout <<"Contact Constructor called" <<std::endl;
}

Contact::~Contact(void)
{
	// std::cout <<"Contact Destructor called" <<std::endl;
}


// Set --------------------

void	Contact::setFname(std::string str)
{
	this->_fname = str;
}

void	Contact::setLname(std::string str)
{
	this->_lname = str;
}

void	Contact::setNick(std::string str)
{
	this->_nick = str;
}

void	Contact::setPhone(std::string str)
{
	this->_phone = str;
}

void	Contact::setSecret(std::string str)
{
	this->_secret = str;
}


// Get --------------------

std::string	Contact::getFname(void) const
{
	return (this->_fname);
}

std::string	Contact::getLname(void) const
{
	return (this->_lname);
}

std::string	Contact::getNick(void) const
{
	return (this->_nick);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}