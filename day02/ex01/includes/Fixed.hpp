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
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif