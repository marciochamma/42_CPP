/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:57:25 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:32:50 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string str); // parameter constructor
	~Weapon(void); // destructor
	void		setType(std::string str);
	std::string	getType(void) const;
};

#endif