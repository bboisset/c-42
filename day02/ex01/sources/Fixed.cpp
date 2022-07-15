# include "../includes/Fixed.hpp"

const int	Fixed::_bytes = 8;

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

Fixed::Fixed(int newVal)
{
	std::cout << "Int constructor called" << std::endl;
	_value = roundf(newVal * 256);
}

Fixed::Fixed(float newVal)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(newVal * 256.0);
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
	return (_value / 256.0);
}

int	Fixed::toInt(void) const
{
	return (_value / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.getRawBits() / 256.0;
	return (out);
}