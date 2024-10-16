/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:10:23 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/07 16:43:43 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	str; // c++ manner

	if (argc < 2)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{	
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
			{
				std::cout <<static_cast<char>(toupper(str[j]));
				
			}
		}
		std::cout <<std::endl;
	}
}
