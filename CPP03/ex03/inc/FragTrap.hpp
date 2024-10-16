/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:17:22 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 13:27:42 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void); // default constructor
	FragTrap(const std::string& name); // parameter constructor
	FragTrap(const FragTrap& copy); // copy constructor
	~FragTrap(void); // destructor
	
	FragTrap&	operator=(const FragTrap& other); // operator= overload

	void	highFivesGuys(void);
};

#endif