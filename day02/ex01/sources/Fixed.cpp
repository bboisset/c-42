# include "../includes/Fixed.hpp"

const int	Fixed::_bytes = 8;
//256 is the result of (1 << _bytes);

Fixed::Fixed()
	: _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &b)
	: _value(b._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Construct a new Fixed:: Fixed object from
 * newVal, by keeping it's fractional part.
 * 
 * @param newVal Integer value to be converted to Fixed.
 */
Fixed::Fixed(int newVal)
{
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
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(newVal * (1 << _bytes)));
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = fixed.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bytes));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _bytes);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}