/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:48:08 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 07:48:26 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Subst.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " <<argv[0] <<" <filename> <string1> <string2>\n";
		return (1);
	}

	Subst	a(argv[1], argv[2], argv[3]);
	a.ft_replace();
	return (0);
}