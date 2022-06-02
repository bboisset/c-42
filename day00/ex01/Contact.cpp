# include "Contact.hpp"

Contact::Contact(void)
	: m_firstName(""), m_lastName(""), m_nickname(""),m_darkestSecret(""), m_phoneNumber("")
{
	
}

/**
 ** @brief Construct a new Contact:: Contact object
 ** 
 ** @param firstName 
 ** @param lastName 
 ** @param darkestSecret 
 ** @param phoneNumber 
 **/
Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
	: m_firstName(firstName), m_lastName(lastName), m_nickname(nickname),  m_darkestSecret(darkestSecret), m_phoneNumber(phoneNumber)
{

}

std::string	formatInfo(std::string info)
{
	if (info.length() > 10)
		return (info.substr(0, 10) + ".");
	return (info);
}

void	Contact::display(void) const
{
	std::cout << std::right << std::setw(13) << formatInfo(m_firstName);
	std::cout << "|";
	std::cout << std::right << std::setw(13) << formatInfo(m_lastName);
	std::cout << "|";
	std::cout << std::right << std::setw(13) << formatInfo(m_nickname);
	std::cout << "|";
	std::cout << std::right << std::setw(13) << formatInfo(m_phoneNumber);
	std::cout << "|";
	std::cout << std::right << std::setw(13) << formatInfo(m_darkestSecret) << std::endl;
}//est -ce autorise par la norme, l absence de endl
