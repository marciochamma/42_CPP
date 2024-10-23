/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:41:45 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 14:52:54 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	// (void)argv;
	// (void)argc;
	
	if (argc != 2)
	{
		std::cout <<"Insert only 1 argument" <<std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	
	return (0);
}
