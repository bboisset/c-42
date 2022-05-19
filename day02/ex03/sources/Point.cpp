# include "../includes/Point.hpp"

/**
 ** @brief Construct a new Point:: Point object
 ** Default constructor init x and y to 0
 ** 
 **/
Point::Point(void)
	: m_x(0), m_y(0)
{
}

/**
 ** @brief Construct a new Point:: Point object
 ** Constructor init x and y with the values of pointA and pointB
 ** 
 ** @param pointA newPoint assign to x
 ** @param pointB newPoint assign to y
 **/
Point::Point(const Fixed &pointA, const Fixed &pointB)
	: m_x(pointA), m_y(pointB)
{
}

Point::~Point(void)
{
}

Point&	Point::operator=(const Point &point)
{
	if (this != &point)
	{
		const_cast<Fixed&>(m_x) = point.m_x;
		const_cast<Fixed&>(m_y) = point.m_y;
	}
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (m_x);
}

Fixed	Point::getY(void) const
{
	return (m_y);
}