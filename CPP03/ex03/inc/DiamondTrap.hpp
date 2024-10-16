/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:41:10 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 13:24:31 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;

public:
	DiamondTrap(void); // default constructor
	DiamondTrap(const std::string& name); // parameter constructor
	DiamondTrap(const DiamondTrap& copy); // copy constructor
	~DiamondTrap(void); // destructor
	
	DiamondTrap&	operator=(const DiamondTrap& other); // operator= overload

	void	attack(const std::string& target);
	void 	whoAmI();
};

#endif