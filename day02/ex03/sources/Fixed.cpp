# include "../includes/Fixed.hpp"

const int	Fixed::m_bytes = 8;

Fixed::Fixed()
	: m_value(0)
{
}

Fixed::Fixed(const Fixed &b)
	: m_value(b.m_value)
{
	*this = b;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int newVal)
{
	m_value = roundf(newVal * 256);
}

Fixed::Fixed(float newVal)
{
	m_value = roundf(newVal * 256.0);
}

int	Fixed::getRawBits(void) const
{
	return (m_value);
}

void	Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

Fixed& Fixed::operator=(Fixed const& fixed)
{
	m_value = fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (m_value > fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (m_value >= fixed.getRawBits());
}

Fixed	Fixed::operator-=(Fixed const& a)
{
	m_value = -a.m_value;
	return (*this);
}

Fixed	Fixed::operator*=(Fixed const& a)
{
	m_value * a.m_value;
	return (*this);
}

Fixed	operator-(const Fixed &a, const Fixed &b)
{
	Fixed	copy(a);

	copy -= b;
	return (copy);
}

Fixed	operator*(const Fixed &fixed, const Fixed &b)
{
	Fixed	copy(fixed);

	copy *= b;
	return (copy);
}

float	Fixed::toFloat(void) const
{
	return (m_value / 256.0);
}

int	Fixed::toInt(void) const
{
	return (m_value / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.getRawBits() / 256.0;
	return (out);
}