# include "Fixed.hpp"

class Point {
	private:
		const Fixed		_x;
		const Fixed		_y;
	public:
		Point(void);
		Point(const Fixed &pointA, const Fixed &pointB);
		Point&	operator=(const Point &point);
		~Point(void);
		Fixed		getX(void) const;
		Fixed		getY(void) const;
};