# include "../includes/Point.hpp"

/**
 ** @brief Construct a new Point:: Point object
 ** Default constructor init x and y to 0
 ** 
 **/
Point::Point(void)
	: _x(0), _y(0)
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
	: _x(pointA), _y(pointB)
{
}

Point::~Point(void)
{
}

Point&	Point::operator=(const Point &point)
{
	if (this != &point)
	{
		const_cast<Fixed&>(_x) = point._x;
		const_cast<Fixed&>(_y) = point._y;
	}
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}