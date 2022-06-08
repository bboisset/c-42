#include "../../day00/ex01/Contact.hpp"

int main(void)
{
	Contact	contactList[7];
	Contact jean("jean","Dupont", "Bruno", "Bruno", "0123456789");

	contactList[0] = Contact("Bruno", "Dupont", "Bruno", "Bruno", "0123456789");
	contactList[0].display();
	contactList[1] = jean;
	contactList[1].display();
	return (0);
}