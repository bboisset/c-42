# include "../Contact.hpp"
# include "../PhoneBook.hpp"
//g++ Contact.cpp PhoneBook.cpp  tests/main.test.cpp -o test.out

void	testAgenda(){
	PhoneBook	agenda;
	Contact		newContact("baptiste", "boisset", "bapt", "0000", "aaa");
	Contact		second("john", "doe", "jd", "0000", "bbb");

	std::cout << "Affichage du contact Baptiste" << std::endl;
	newContact.display();
	agenda.addContact(newContact);
	agenda.addContact(second);
	std::cout << "Affichage de tout les contacts" << std::endl;
	agenda.display();
}

void	test8Contacts(){
	std::cout << "Test 8 contacts" << std::endl;
	PhoneBook	agenda;
	Contact		a("a", "a", "a", "a", "a");
	Contact		b("b", "b", "b", "b", "b");
	Contact		c("c", "c", "c", "c", "c");
	Contact		d("d", "d", "d", "d", "d");
	Contact		e("e", "e", "e", "e", "e");
	Contact		f("f", "f", "f", "f", "f");
	Contact		g("g", "g", "g", "g", "g");
	Contact		h("h", "h", "h", "h", "h");
	Contact		i("i", "i", "i", "i", "i");

	agenda.addContact(a);
	agenda.addContact(b);
	agenda.addContact(c);
	agenda.addContact(d);
	agenda.addContact(e);
	agenda.addContact(f);
	agenda.addContact(g);
	agenda.addContact(h);
	agenda.addContact(i);
	agenda.display();
}

void	testEmptyContacts(){
	PhoneBook	agenda;
	
	std::cout << "Test empty contacts" << std::endl;
	agenda.display();
	std::cout << "Nothing should be above" << std::endl;
}

int	main(void){
	testAgenda();
	test8Contacts();
	testEmptyContacts();
	return (0);
}