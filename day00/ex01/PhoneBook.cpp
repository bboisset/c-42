# include "PhoneBook.hpp"
# include <stdexcept>
# include <string>

PhoneBook::PhoneBook()
	: _contactIndex(0), _contactCount(0)
{

}

int	PhoneBook::search(int index) const
{
	Contact	searchUser;

	try
	{
		if (index <= 0)
			throw	std::invalid_argument("Invalid argument");
		if ((index - 1) >= _contactCount)
			throw	std::invalid_argument("Not enough contact");
		else
			_contactList[index - 1].display();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

int	PhoneBook::addContact(Contact newContact)
{
	if (_contactIndex == 8)
		_contactIndex = 0;
	_contactList[_contactIndex] = newContact;
	std::cout << "inserted contact with index " << _contactIndex << std::endl;
	_contactIndex++;
	if (_contactCount < 8)
		_contactCount++;
	return (0);
}

void	PhoneBook::display(void) const
{
	int	i;

	i = 0;
	while (i < _contactCount)
	{
		std::cout << std::right << std::setw(13) << i + 1 << "|";
		_contactList[i++].display();
	}
}