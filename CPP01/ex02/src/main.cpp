/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:08:42 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 09:31:20 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	
	std::string	*stringPTR; // pointer can be initialized as NULL
	stringPTR = &str;

	std::string	&stringREF = str; // pointer can't be initialized as NULL

	std::cout<<std::endl;

	std::cout <<"Memory Address str: " <<&str <<std::endl;
	std::cout <<"Memory Address stringPTR: " <<stringPTR <<std::endl;
	std::cout <<"Memory Address stringREF: " <<&stringREF <<std::endl;
	
	std::cout<<std::endl;

	std::cout <<"Value of str: " <<str <<std::endl;
	std::cout <<"Value of stringPTR: " <<*stringPTR <<std::endl;
	std::cout <<"Value of stringREF: " <<stringREF <<std::endl;

	std::cout<<std::endl;

}