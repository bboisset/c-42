# include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = dog._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woaf" << std::endl;
}
