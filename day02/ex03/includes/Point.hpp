# include "Fixed.hpp"

class Point {
	private:
		const Fixed		m_x;
		const Fixed		m_y;
	public:
		Point(void);
		Point(const Fixed &pointA, const Fixed &pointB);
		Point&	operator=(const Point &point);
		~Point(void);
		Fixed		getX(void) const;
		Fixed		getY(void) const;
};