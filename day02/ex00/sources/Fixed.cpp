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

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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