/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:01:39 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/12 16:36:10 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class Phonebook
{
public:
	
	Phonebook(void); // Constructor
	~Phonebook(void); // Destructor
	
	void	add(void);
	void	search(void);

private:
	Contact		_list[8];
	int 		_currentIndex;
	
	void		print(char index);
	std::string	getInput(const std::string &prompt);
};

#endif