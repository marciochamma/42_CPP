/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:02:12 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:41:36 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr <<"Insert one argument: ";
		std::cerr <<"DEBUG, INFO, WARING or ERROR" <<std::endl;
		return (1);
	}

	Harl	hey;
	hey.complain(argv[1]);

	return (0);
}
