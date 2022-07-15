#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <map>

class Harl {
	private:
		std::string	_maxLevel;
		int	_maxLevelVal;

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void 	insignificant(void);

		int		getLevelIndex(std::string level);
	public:
		void	complain();
		Harl(std::string maxLevel);
};
#endif