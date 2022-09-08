/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:37:12 by bboisset          #+#    #+#             */
/*   Updated: 2022/09/02 11:40:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <cmath>
# include <iostream>

class Fixed {
	private:
		/**
		* Fractionnal part of the fixed point number
		*/
		int	_value;
		static const int	_bytes;
		static const bool	_debug;

	public:
		Fixed();
		Fixed(const int newVal);
		Fixed(const float newVal);
		Fixed(const Fixed &fixed);
		~Fixed();

		//Assignation operators
		Fixed	&operator=(const Fixed &fixed);
		Fixed	operator-=(Fixed const & a);
		Fixed	operator*=(Fixed const & a);

		//Comparator operators
		bool	operator<(const Fixed & fixed) const;
		bool	operator>(const Fixed & fixed) const;
		bool	operator>=(const Fixed & fixed) const;
		bool	operator<=(const Fixed & fixed) const;
		bool	operator==(const Fixed & fixed) const;
		bool	operator!=(const Fixed & fixed) const;

		//Increment and decrement operators
		Fixed	&operator++();//pre-increment
		Fixed	&operator--();//pre-decrement
		Fixed	operator++(int);//post-increment
		Fixed	operator--(int);//post-decrement

		//Arithmetic operators
		Fixed	operator+(Fixed const & a) const;
		Fixed	operator-(Fixed const & a) const;
		Fixed	operator*(Fixed const & a) const;
		Fixed	operator/(Fixed const & a) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);

		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif