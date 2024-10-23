/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:58:48 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 10:13:46 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;

public:
	RobotomyRequestForm(void); // default constructor
	RobotomyRequestForm(std::string target); // parameter constructor
	RobotomyRequestForm(const RobotomyRequestForm& copy); // copy constructor
	~RobotomyRequestForm(void); // destructor

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

	void	action(void) const;
};

#endif