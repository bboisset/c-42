#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base	*generate(void)
{
	Base	*instance(NULL);
	int i = rand() % 3;

	if (i == 0)
		instance = new A();
	else if (i == 1)
		instance = new B();
	else
		instance = new C();
	return (instance);
}

void identify(Base *p)
{
	
}