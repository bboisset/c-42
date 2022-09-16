#include "../includes/Span.hpp"

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)())
{
	std::cout << "Running test: " << testName << std::endl;
	waitUserInput();
    test();
	std::cout << "Test " << testName << " donned!"
		<< std::endl << std::endl;
}

void	test42()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "table : ";
	sp.printTab();
	std::cout << std::endl;
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
}

void	bigTest()
{
	Span sp = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp.addNumber(i);
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
}

void	randomTest()
{
	Span sp = Span(10);
	for (int i = 0; i < 10; i++)
		sp.addNumber(rand() % 100);
	std::cout << "table : ";
	sp.printTab();
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
}

void	invalidsSpan()
{
	Span sp = Span(10);
	try
	{
		sp.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		sp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	insertInvalidSpan(){
	Span sp = Span(2);
	try
	{
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

/**
Le meilleur pour la fin. Une possibilité qu’il serait utile d’avoir, c’est celle de pouvoir
remplir votre Span en utilisant une plage d’itérateurs (range of iterators). Faire des
centaines d’appels à addNumber(), c’est plutôt répétitif. Implémentez une fonction qui
permet d’ajouter plusieurs nombres à votre Span en un appel.
*/

int main()
{
	runTest("42", test42);
	runTest("test for a span of 10 000 numbers", bigTest);
	runTest("test for 10 random numbers", randomTest);
	runTest("test for invalid span", invalidsSpan);
	runTest("test for invalid insert", insertInvalidSpan);
	throw std::exception();
    return (0);
}