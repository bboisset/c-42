/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <bboisset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:37:18 by bboisset          #+#    #+#             */
/*   Updated: 2022/09/02 11:41:16 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Fixed.hpp"

const int	Fixed::_bytes = 8;
const bool  Fixed::_debug = true;

Fixed::Fixed()
	: _value(0)
{
	if (_debug)
		std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief Construct a new Fixed:: Fixed object from
 * newVal, by keeping it's fractional part.
 * 
 * @param newVal Integer value to be converted to Fixed.
 */
Fixed::Fixed(int newVal)
{
	if (_debug)
		std::cout << "Int constructor called" << std::endl;
	setRawBits(newVal << _bytes);
}

/**
 * @brief Construct a new Fixed:: Fixed object from
 * newVal, by keeping it's fractional part.
 * 
 * @param newVal Float value to be converted to Fixed.
 */
Fixed::Fixed(float newVal)
{
	if (_debug)
		std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(newVal * (1 << _bytes)));
}

Fixed::Fixed(const Fixed &b)
	: _value(b._value)
{
	if (_debug)
		std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed()
{
	if (_debug)
		std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

/**
 * Assignations operators
 */
Fixed& Fixed::operator=(const Fixed &fixed)
{
	if (_debug)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_value = fixed.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-=(Fixed const & a)
{
	_value -= a._value;
	return (*this);
}

Fixed	Fixed::operator*=(Fixed const & a)
{
	_value *= a._value;
	return (*this);
}

/**
 * Comparator operators
 */

//Comparator operators `<`
bool	Fixed::operator<(const Fixed & fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

//Comparator operators `>`
bool	Fixed::operator>(const Fixed & fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

//Comparator operators `>=`
bool	Fixed::operator>=(const Fixed & fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

//Comparator operators `<=`
bool	Fixed::operator<=(const Fixed & fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

//Comparator operators `==`
bool	Fixed::operator==(const Fixed & fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

//Comparator operators `!=`
bool	Fixed::operator!=(const Fixed & fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

/**
 * Increment and decrement operators
 */

//Pre-increment operator
Fixed	&Fixed::operator++(void)
{
	_value += 1;
	return (*this);
}

//Post-increment operator
Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	_value += 1;
	return (copy);
}

//Pre-decrement operator
Fixed	&Fixed::operator--(void)
{
	_value -= 1;
	return (*this);
}

//Post-decrement operator
Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);
	_value -= 1;
	return (copy);
}

/**
 * Conversions
 */

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bytes));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _bytes);
}

/**
 * Min and Max functions
 */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

/**
 * Arhimetic operators 
 */

//Arithmethic Operator `+`
Fixed	Fixed::operator+(Fixed const & a) const
{
	Fixed	copy;
	copy = (this->toFloat() + a.toFloat());
	return (copy);
}

//Arithmethic Operator `-`
Fixed	Fixed::operator-(Fixed const & a) const
{
	Fixed	copy;
	copy = (this->toFloat() - a.toFloat());
	return (copy);
}

//Arithmethic Operator `*`
Fixed	Fixed::operator*(Fixed const & a) const
{
	Fixed	copy;
	copy = (this->toFloat() * a.toFloat());
	return (copy);
}

//Arithmethic Operator `/`
Fixed	Fixed::operator/(Fixed const & a) const
{
	Fixed	copy;
	copy = (this->toFloat() / a.toFloat());
	return (copy);
}