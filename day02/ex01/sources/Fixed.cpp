# include "../includes/Fixed.hpp"

const int	Fixed::m_bytes = 8;

Fixed::Fixed()
	: m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &b)
	: m_value(b.m_value)
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
	m_value = roundf(newVal * 256);
}

Fixed::Fixed(float newVal)
{
	std::cout << "Float constructor called" << std::endl;
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

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	m_value = fixed.getRawBits();
	return (*this);
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