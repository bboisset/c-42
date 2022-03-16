#ifndef DEF_CONTACT_HPP
# define DEF_CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Contact {

	private:
		std::string	m_firstName;
		std::string	m_lastName;
		std::string	m_nickname;
		std::string	m_darkestSecret;
		std::string	m_phoneNumber;

	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
		void	display(void) const;
};
#endif