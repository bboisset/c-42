#include "../includes/Array.hpp"

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)()) {
	waitUserInput();
	std::cout << std::endl << "Running test: " << testName << std::endl;
	test();
}

void	testEmptyArray() {
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
}

void	testArrayConstructor() {
	std::cout << "Creating an array of 5 integers" << std::endl;
	Array<int> intArray(5);
	std::cout << "Array size: " << intArray.size() << std::endl;
	std::cout << "Inserting 42 at index 2" << std::endl;
	intArray.insert(42, 2);
	std::cout << "Element at index 2: " << intArray[2] << std::endl;
}

void	testCopyConstructor(){
	std::cout << "Creating an array of 3 integers" << std::endl;
	Array<int> intArray(3);
	std::cout << "Inserting 40, 41, 42 at index 0, 1, 2" << std::endl;
	intArray.insert(40, 0);
	intArray.insert(41, 1);
	intArray.insert(42, 2);

	std::cout << "Creating a copy of the array" << std::endl;
	Array<int> copyArray(intArray);
	std::cout << "Element at index 0: " << copyArray[0] << std::endl;
	std::cout << "Element at index 1: " << copyArray[1] << std::endl;
	std::cout << "Element at index 2: " << copyArray[2] << std::endl;

	std::cout << "Inserting 43 at index 2" << std::endl;
	copyArray.insert(43, 2);
	std::cout << "Assigning the copy to the original" << std::endl;
	intArray = copyArray;
	std::cout << "Element at index 2: " << intArray[2] << std::endl;
}

void	testGetOverloadOverflow(){
	std::cout << "Creating an array of 1 integers" << std::endl;
	Array<int> intArray(3);
	std::cout << "Inserting 42 index 0" << std::endl;
	intArray.insert(42, 0);

	std::cout << "Trying to access element at index 3" << std::endl;
	try {
		std::cout << "Element at index 3: " << intArray[3] << std::endl;
	} catch (std::exception & e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

int	main(void)
{
	runTest("Empty array", testEmptyArray);
	runTest("Array constructor", testArrayConstructor);
	runTest("Copy constructor", testCopyConstructor);
	runTest("Insertion overflow", testGetOverloadOverflow);
	return (0);
}