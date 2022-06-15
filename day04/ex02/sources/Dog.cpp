# include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain(*dog._brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
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
