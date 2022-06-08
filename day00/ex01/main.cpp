# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <string>

std::string	waitUserInput(void)
{
	std::string	user_input;

	std::cout /*<< "\x1B[2J\x1B[H"*/ << "Insérer une commande :" << std::endl;
	std::cin >> user_input;
	return (user_input);
}

std::string askInformation(std::string question)
{
	std::string	information;

	std::cout << "\x1B[2J\x1B[H" << question << " :" << std::endl;
	std::cin >> information;
	return (information);
}

Contact	askContactInformation(void)
{
	std::string firstname = askInformation("Prénom");
	std::string lastname = askInformation("Nom");
	std::string nickname = askInformation("Surnom");
	std::string phone = askInformation("Numéro de téléphone");
	std::string darkestSecret = askInformation("Plus lourd secret");
	std::cout << "\x1B[2J\x1B[H";
	Contact		newContact(firstname, lastname, nickname, phone, darkestSecret);
	return (newContact);
}

bool is_digits(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void	searchUser(PhoneBook	agenda)
{
	std::string	input;

	agenda.display();
	std::cout << "Index du contact :" << std::endl;
	std::cin >> input;
	if (!is_digits(input))
		std::cout << "Erreur : " << input << " n'est pas un index valide." << std::endl;
	else
	{
		int index = std::stoi(input);
		agenda.search(index);
	}
}

void	handleUserInput(PhoneBook & agenda, std::string userInput)
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
	PhoneBook	agenda;
//	PhoneBook	*contact;

	while (run)
	{
		std::string	last_input = waitUserInput();
		handleUserInput(agenda, last_input);
	}
}