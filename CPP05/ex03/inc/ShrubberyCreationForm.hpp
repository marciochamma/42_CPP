/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:58:48 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 10:13:57 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm(void); // default constructor
	ShrubberyCreationForm(std::string target); // parameter constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& copy); // copy constructor
	~ShrubberyCreationForm(void); // destructor

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

	void	action(void) const;
};

#endif