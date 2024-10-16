/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:21:40 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/12 16:35:32 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
public:
	Contact(void); // Constructor
	~Contact(void); // Destructor
	
	void	setFname(std::string str);
	void	setLname(std::string str);
	void	setNick(std::string str);
	void	setPhone(std::string str);	
	void	setSecret(std::string str);	
	
	std::string	getFname(void) const;
	std::string	getLname(void) const;
	std::string	getNick(void) const;
	std::string	getPhone(void) const;
	std::string	getSecret(void) const;

private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nick;
	std::string	_phone;
	std::string	_secret;
};

#endif
