#include "../includes/Base.hpp"
#include <iostream>

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

void    testTrueType()
{
    Base *p = generate();
    std::cout << "Found type (p): ";
    identify(p);
	std::cout << "Found type (*p): ";
	identify(*p);
    delete p;
}

int main(void){
    runTest("True type", testTrueType);
    return 0;
}