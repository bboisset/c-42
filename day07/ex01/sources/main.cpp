#include "../includes/iter.hpp"
#include <iostream>

void print(int &i)
{
    std::cout << i << std::endl;
}

void    print_pow(int &i)
{
    std::cout << i * i << std::endl;
}

void    test_print(){
    int tab[] = {0, 1, 2, 3, 4};
    ::iter(tab, 5, print);
}

void    test_pow(){
    int tab[] = {0, 1, 2, 3, 4};
    ::iter(tab, 5, print_pow);
}

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)()) {
	waitUserInput();
	std::cout << std::endl << "Running test: " << testName << std::endl;
	test();
}

int main(void)
{
    runTest("test_print", test_print);
    runTest("test_pow", test_pow);
    return (0);
}