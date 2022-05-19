#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <cmath>
# include <iostream>

/**
 * @brief Class with Coplien format
 * 4 criteria for the coplien formating:
 * - Default constructor
 * - Copy constructor
 * - Destructor
 * - Copy assignment operator
 * (Same order as above)
 */
class Fixed {
	private:
		int	m_value;
		static const int	m_bytes;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif