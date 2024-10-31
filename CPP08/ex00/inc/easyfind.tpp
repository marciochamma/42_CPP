/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:07:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/27 18:49:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("element not found");
	return (it);
}
