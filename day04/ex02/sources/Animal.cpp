# include "../includes/Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal constructor called" << std::endl;
	_type = "Animal";
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &animal)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = animal._type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "* animal sound *" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (_type);
}