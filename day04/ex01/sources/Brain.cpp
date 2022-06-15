# include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}