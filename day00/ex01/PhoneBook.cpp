# include "PhoneBook.hpp"
# include <stdexcept>
# include <string>

PhoneBook::PhoneBook()
{

}

int	PhoneBook::search(int index) const
{
	Contact	searchUser;

	try
	{
		if (index < 0)
			throw	std::invalid_argument("Invalid argument");
		if (static_cast<std::vector<int>::size_type>(index) > m_contactList.size())
			throw	std::invalid_argument("Not enough contact");
		else
		{
			searchUser = m_contactList.at(index);
			searchUser.display();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

int	PhoneBook::addContact(Contact newContact)
{
	//do veification
	m_contactList.push_back(newContact);
	//verifier le succes de l ajout
	return (0);
}

void	PhoneBook::display(void) const
{
	for (int i(0); static_cast<std::vector<int>::size_type>(i) < m_contactList.size(); ++i)
	{
		m_contactList[i].display();
	}
}