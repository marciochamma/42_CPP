/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:16:01 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:32:20 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_club; // reference to weapon

public:
	HumanA(std::string name, Weapon &club); // parameter constructor
	~HumanA(void); // destructor

	void		attack(void);	
};

#endif

// Reference to Weapon (used in HumanA): It is suitable when 
// we are sure that the Weapon object will always exist during 
// the lifetime of the HumanA object. The reference ensures 
// that HumanA always has an associated weapon.