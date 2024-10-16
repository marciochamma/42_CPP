/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:04:28 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 15:47:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];

public:
	Brain(void); // default constructor
	Brain(const Brain& copy); // copy constructor
	~Brain(void); // destructor

	Brain&	operator=(const Brain& other);

	std::string		getIdea(int i) const;
	void			setIdea(int i, const std::string newIdea);
};

#endif