# include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "Assignation operator called" << std::endl;
	_type = wrongCat._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* wrong cat sound *" << std::endl;
}