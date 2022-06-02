# include "../includes/Point.hpp"

/**
 ** @brief Determine wethe the given point is at 
 ** the left of the given line ab
 ** 
 ** @param a 
 ** @param b 
 ** @param point 
 ** @return 
 **/
Fixed	isLeft(Point const a, Point const b, Point point)
{
	return (b.getX() - a.getX()) * (point.getY() - a.getY())
		- (b.getY() - a.getY()) * (point.getX() - a.getX());
}

/**
 ** @brief Determine wether the given point is inside
 ** a triangle, defined by vertices A, B and C.
 ** 
 ** @param a Corner A of the triangle
 ** @param b Corner B of the triangle
 ** @param c Corner C of the triangle
 ** @param point A point inside or outisde the triangle
 ** @return true if the point is inside the triangle, false otherwise.
 **/
bool	bsp(Point const a, Point const b, Point const c, Point point)
{
	Fixed	det;

	det = (b.getX() - a.getX()) * (c.getY() - a.getY())
		- (b.getY() - a.getY()) * (c.getX() - a.getX());
	return (
		det * ((b.getX() - a.getX()) * (point.getY() - a.getY())
			- (b.getY() - a.getY()) * (point.getX() - a.getX())) >= 0 &&
		det * ((c.getX() - b.getX()) * (point.getY() - b.getY() )
			- (c.getY() - b.getY()) * (point.getX() - b.getX())) >= 0 &&
		det * ((a.getX() - c.getX()) * (point.getY() - c.getY())
			- (a.getY() - c.getY()) * (point.getX() - c.getX())) >= 0
	);
}

int main(void)
{
	Point	a(0, 0);
	Point	b(3, 0);
	Point	c(0, 3);
	Point	internalPoint(1, 1);
	Point	externalPoint(3, 3);

	std::cout << "Let's suppose that the triangle ABC is defined by the points A(0, 0), B(3, 0) and C(0, 3)." << std::endl;
	std::cout << "We also have two points, internalPoint (1, 1) and externalPoint (3, 3)." << std::endl;
	std::cout << "Is internalPoint inside of the triangle? " << std::endl
		<< (bsp(a, b, c, internalPoint) ? "yes" : "no") << std::endl;
	std::cout << "Is externalPoint outside of the triangle? " << std::endl
		<< (bsp(a, b, c, externalPoint) ? "no" : "yes") << std::endl;
	return (0);
}