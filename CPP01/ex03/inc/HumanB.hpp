/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:28:06 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:32:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_club; // pointer to weapon

public:
	HumanB(std::string name); // parameter constructor
	~HumanB(void); // destructor

	void	setWeapon(Weapon &club);
	void	attack(void);	
};

#endif

// Pointer to Weapon (used in HumanB): Here, the use of pointers 
// is appropriate because HumanB can exist without having a weapon. 
// The pointer can be nullptr, indicating that HumanB does not 
// have a weapon at the moment.