# include "../includes/Animal.hpp"
# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"

# include "../includes/WrongAnimal.hpp"
# include "../includes/WrongCat.hpp"

void	wrongMain() {
	const WrongAnimal *meta = new WrongAnimal();
	const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound! j->makeSound();
	meta->makeSound();
}

void	originalTest() {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound! j->makeSound();
	meta->makeSound();
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

int main()
{
	runTest("subject test", originalTest);
	runTest("test without Polymorph", wrongMain);
	std::cout << std::endl << "All tests donned!" << std::endl;
	return 0;
}