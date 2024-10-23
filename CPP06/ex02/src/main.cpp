/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:41:45 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 12:34:24 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base*	randomClass;

	randomClass = generate(); // generate randomly
	identify(randomClass); // using pointer
	identify(*randomClass); // using reference

	delete randomClass;

	return (0);
}
