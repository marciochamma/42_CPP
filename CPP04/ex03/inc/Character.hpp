/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:58:41 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/16 11:18:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
// #include <vector>

class Character : public ICharacter
{
private:
	std::string				_name;
	AMateria*				_inventory[4];
	AMateria*				_floor[42];
	// std::vector<AMateria*> _droppedMaterias;

public:
	Character(void); //default constructor
	Character(const std::string& name); // parameter constructor
	Character(const Character& copy); // copy constructor
	virtual ~Character(void); // destructor

	Character&	operator=(const Character& other); // operator= overload

	const std::string&	getName() const;
	void 				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	bool				dropOnFloor(AMateria* m);
	void				cleanFloor(void);
};

#endif
