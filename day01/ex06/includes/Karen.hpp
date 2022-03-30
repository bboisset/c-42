#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <map>

class Karen {
	private:
		std::string	m_maxLevel;
		int	m_maxLevelVal;

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void 	insignificant(void);
	public:
		void	complain(std::string level);
		Karen(std::string maxLevel);
};
#endif