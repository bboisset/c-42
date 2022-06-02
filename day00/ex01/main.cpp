# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <string>
# include <vector>

std::string	waitUserInput(void)
{
	std::string	user_input;

	std::cout << "\x1B[2J\x1B[H" << "Insérer une commande :" << std::endl;
	std::cin >> user_input;
	return (user_input);
}


Contact	askContactInformation(void)
{
	std::vector<std::string>	keys{"Prénom","Nom","Surnom","Numéro de téléphone", "Plus lourd secret"};
	std::vector<std::string>::iterator	keysIt;
	std::vector<std::string>	newInfos(5);
	std::vector<std::string>::iterator	infoIt;

	infoIt = newInfos.begin();
	for (keysIt = keys.begin(); keysIt != keys.end(); ++keysIt)
	{
		std::cout << "\x1B[2J\x1B[H" << *keysIt << " :" << std::endl;
		std::cin >> *infoIt;
		++infoIt;
	}
	Contact		newContact(newInfos[0], newInfos[1], newInfos[2], newInfos[3], newInfos[4]);
	return (newContact);
}

void	searchUser(PhoneBook	agenda)
{
	int	index;

	agenda.display();
	std::cout << "Index du contact :" << std::endl;
	std::cin >> index;
	agenda.search(index);
}

void	handleUserInput(PhoneBook agenda, std::string userInput)
{
	if (userInput == "ADD")
		agenda.addContact(askContactInformation());
	else if (userInput == "EXIT")
		exit(0);
	else if (userInput == "SEARCH")
		searchUser(agenda);
}

//gerer les espaces à l'insertion d'un string
int main(void)
{
	int			run(true);
	std::string	last_input;
	PhoneBook	agenda;
//	PhoneBook	*contact;

	while (run)
	{
		last_input = waitUserInput();
		handleUserInput(agenda, last_input);
	}
}