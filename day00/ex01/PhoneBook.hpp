#ifndef DEF_PHONEBOOK_HPP
# define DEF_PHONEBOOK_HPP
# include <vector>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		std::vector<Contact>	m_contactList;

	public:
		PhoneBook(void);
		int		search(int index) const;
		int		addContact(Contact newContact);
		void	display(void) const;
};
#endif