# include "../includes/Fixed.hpp"

void	default_test()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

void	to_float_tests()
{
	Fixed const a(1234.4321f);
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
}

int	main(void)
{
	std::cout << "Default tests:" << std::endl << std::endl;
	default_test();
	std::cout << std::endl << "To float tests:" << std::endl << std::endl;
	to_float_tests();
	return (0);
}