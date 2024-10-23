/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:23:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 15:11:30 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>
#include <ctime> // for time
#include <cstdlib> // for srand

class Base
{
public:
	virtual ~Base(void); // destructor
};

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

#endif