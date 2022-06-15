# include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain(*cat._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = cat._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
}