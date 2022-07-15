# include "../includes/Point.hpp"

Fixed sign(Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

/**
 * @brief Determine if a point is inside a triangle.
 * 
 * @param a Corner A of the triangle
 * @param b Corner B of the triangle
 * @param c Corner C of the triangle
 * @param point A point on the 2d plan
 * @return true if point is inside, false otherwise.
 */
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1 = sign(point, a, b);
	Fixed	d2 = sign(point, b, c);
	Fixed	d3 = sign(point, c, a);
	bool	hasNegative = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	hasPositive = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return (!(hasNegative && hasPositive));
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
	std::cout << "Is externalPoint inside of the triangle? " << std::endl
		<< (bsp(a, b, c, externalPoint) ? "yes" : "no") << std::endl;
	return (0);
}