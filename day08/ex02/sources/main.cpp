#include "../includes/MutantStack.hpp"
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

void    test_42(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void	test_affect_operator(void)
{
	MutantStack<int> mstack;
	MutantStack<int> mstack2;

	mstack.push(542);
	mstack.push(442);
	mstack.push(342);
	mstack.push(242);
	mstack.push(142);
	mstack.push(42);

	mstack2 = mstack;

	MutantStack<int>::iterator it = mstack2.begin();
	MutantStack<int>::iterator ite = mstack2.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	test_copy_constructor(void)
{
	MutantStack<int> mstack;

	mstack.push(542);
	mstack.push(442);

	MutantStack<int> mstack2(mstack);

	MutantStack<int>::iterator it = mstack2.begin();
	MutantStack<int>::iterator ite = mstack2.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	runTest("42", test_42);
	runTest("affect operator", test_affect_operator);
	runTest("copy constructor", test_copy_constructor);
    return 0;
}
