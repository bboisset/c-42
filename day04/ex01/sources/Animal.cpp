# include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &animal)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = animal._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "* animal sound *" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}