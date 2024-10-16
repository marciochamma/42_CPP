/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:47:27 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:31:19 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string	_name;
	void	announce(void);

public:
	Zombie(void); // default constructor
	Zombie(const std::string &name); // parameter constructor
	~Zombie(void); // destructor
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif