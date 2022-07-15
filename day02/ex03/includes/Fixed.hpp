#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <cmath>
# include <iostream>

class Fixed {
	private:
		int	_value;
		static const int	_bytes;

	public:
		Fixed();
		Fixed(const int newVal);
		Fixed(const float newVal);
		Fixed(const Fixed & fixed);
		//Comparator operators
		bool	operator<(const Fixed & fixed) const;
		bool	operator>(const Fixed & fixed) const;
		bool	operator>=(const Fixed & fixed) const;
		//Assignation operators
		Fixed&	operator=(Fixed const & fixed);
		Fixed	operator-=(Fixed const & a);
		Fixed	operator*=(Fixed const & a);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

//Arithmetic operators
Fixed	operator-(const Fixed &a, const Fixed &b);
Fixed	operator*(const Fixed &fixed, const Fixed &b);
#endif