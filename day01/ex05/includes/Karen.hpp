#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <map>

class Karen {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
		Karen();
};
#endif