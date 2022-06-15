# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = wrongAnimal._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* wrong animal sound *" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}