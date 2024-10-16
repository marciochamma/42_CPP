/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Subst.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:20:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:05:42 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBST_H
#define SUBST_H

#include <iostream>
#include <fstream>

class Subst
{
private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

public:
	Subst(const std::string& filename, const std::string& s1, const std::string& s2); // parameter constructor
	~Subst(void); // destructor

	bool	ft_replace(void);
};

#endif