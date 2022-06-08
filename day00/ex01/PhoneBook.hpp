#ifndef DEF_PHONEBOOK_HPP
# define DEF_PHONEBOOK_HPP
# include <vector>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contactList[8];
		int		_contactIndex;
		int		_contactCount;

	public:
		PhoneBook(void);
		int		search(int index) const;
		int		addContact(Contact newContact);
		void	display(void) const;
};
#endif