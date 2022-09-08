/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:37:22 by bboisset          #+#    #+#             */
/*   Updated: 2022/09/02 11:39:35 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Fixed.hpp"

void	print_title(std::string title)
{
	std::cout << std::endl << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << title << std::endl;
	std::cout << "====================" << std::endl;
}

std::string	bool_to_string(bool b)
{
	if (b)
		return ("true");
	else
		return ("false");
}

void	test_comparator_operators(void)
{
	Fixed a(1.2f);
	Fixed b(2.3f);
	Fixed c(1.1f);

	print_title("comparator operators");
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a < b: " << bool_to_string(a < b) << std::endl;
	std::cout << "a > b: " << bool_to_string(a > b) << std::endl;
	std::cout << "a <= b: " << bool_to_string(a <= b) << std::endl;
	std::cout << "a >= b: " << bool_to_string(a >= b) << std::endl;
	std::cout << "a == b: " << bool_to_string(a == b) << std::endl;
	std::cout << "a == a: " << bool_to_string(a == a) << std::endl;
	std::cout << "a != b: " << bool_to_string(a != b) << std::endl;
	std::cout << "a != a: " << bool_to_string(a != a) << std::endl;
}

void	test_arithmetic_operator(void)
{
	Fixed a(1.0f);
	Fixed b(2.0f);

	print_title("Arithmetic operators");
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
}

void	test_42(void){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	print_title("tests 42");
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int main( void ) {
	test_42();
	test_comparator_operators();
	test_arithmetic_operator();
	return (0);
}