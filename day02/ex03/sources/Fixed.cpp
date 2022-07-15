# include "../includes/Fixed.hpp"

const int	Fixed::_bytes = 8;

Fixed::Fixed()
	: _value(0)
{
}

Fixed::Fixed(const Fixed & b)
	: _value(b._value)
{
	*this = b;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int newVal)
{
	_value = roundf(newVal * 256);
}

Fixed::Fixed(float newVal)
{
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

Fixed& Fixed::operator=(Fixed const& fixed)
{
	_value = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed & fixed) const
{
	return (_value < fixed.getRawBits());
}

bool	Fixed::operator>(const Fixed & fixed) const
{
	return (_value > fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed & fixed) const
{
	return (_value >= fixed.getRawBits());
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

Fixed	operator-(const Fixed & a, const Fixed & b)
{
	Fixed	copy(a);

	copy -= b;
	return (copy);
}

Fixed	operator*(const Fixed & fixed, const Fixed & b)
{
	Fixed	copy(fixed);

	copy *= b;
	return (copy);
}

float	Fixed::toFloat(void) const
{
	return (_value / 256.0);
}

int	Fixed::toInt(void) const
{
	return (_value / 256);
}

std::ostream &operator<<(std::ostream & out, const Fixed & fixed)
{
	out << fixed.getRawBits() / 256.0;
	return (out);
}