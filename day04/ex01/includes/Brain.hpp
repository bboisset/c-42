#ifndef DEF_BRAIN_HPP
# define DEF_BRAIN_HPP
# include <iostream>
# include <string>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain &brain);
		~Brain(void);
		Brain &operator=(const Brain &brain);
};
#endif