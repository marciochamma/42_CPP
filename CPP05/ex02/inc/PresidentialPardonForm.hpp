/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:09:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 10:09:31 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm(void); // default constructor
	PresidentialPardonForm(std::string target); // parameter constructor
	PresidentialPardonForm(const PresidentialPardonForm& copy); // copy constructor
	~PresidentialPardonForm(void); // destructor

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

	void	action(void) const;
};

#endif