#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <time.h>

Base	*generate(void)
{
	Base	*instance(NULL);
	
	srand(time(NULL));
	int i = rand() % 3;
	if (DEBUG)
		std::cout << "i = " << i << std::endl;

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
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}