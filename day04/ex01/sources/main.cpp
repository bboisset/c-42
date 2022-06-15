# include "../includes/Animal.hpp"
# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"

void	originalTest() {
	Animal *animalArray[10];

	for (int i = 0; i < 5; i++) {
		std::cout << "Animal " << i << ": ";
		animalArray[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		std::cout << "Animal " << i + 5 << ": ";
		animalArray[i + 5] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		delete animalArray[i];
		std::cout << std::endl;
	}
}

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)()) {
	std::cout << "Running test: " << testName << std::endl;
	waitUserInput();
	test();
	std::cout << "Test " << testName << " donned!"
		<< std::endl << std::endl;
}

void	testDeepCopy(void){
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);
}

int main()
{
	runTest("subject test", originalTest);
	runTest("deep copy test", testDeepCopy);
	std::cout << std::endl << "All tests donned!" << std::endl;
	return 0;
}