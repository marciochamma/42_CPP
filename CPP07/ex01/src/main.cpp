/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:47:17 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/24 23:58:24 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const int intArray[] = {1, 2, 3, 4, 5};
	::iter(intArray, 5, printElem<int>);
	std::cout <<"\n\n";

	float floatArray[] = {1.1f, 2.2f, 3.1f, 4.4f, 5.0f};
	::iter(floatArray, 5, printElem<float>);
	std::cout <<std::endl;
	::iter(floatArray, 5, doubleElem<float>);
	::iter(floatArray, 5, printElem<float>);
	std::cout <<"\n\n";

	std::string strArray[] = {"Hello", "World"};
	::iter(strArray, 2, printElem<std::string>);
	std::cout <<std::endl;
	::iter(strArray, 2, replaceElem<std::string>);
	::iter(strArray, 2, printElem<std::string>);
	std::cout <<"\n\n";
}

// ------------------------

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }

// ------------------------