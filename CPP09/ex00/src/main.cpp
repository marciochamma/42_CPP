/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:12:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/01 12:33:39 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file.\n";
		return (1);
	}

	Btc	bitcoin("data.csv", argv[1]);
	
	if (!bitcoin.checkFiles())
		return (1);

	try
	{
		bitcoin.loadMap();
		// bitcoin.printData();
		bitcoin.traverseInput();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}










