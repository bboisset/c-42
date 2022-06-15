#include "../includes/Bureaucrat.hpp"
#include <iostream>

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test) (int), int arg) {
	std::cout << "Running test: " << testName << std::endl;
	waitUserInput();
	test(arg);
	std::cout << "Test " << testName << " donned!"
		<< std::endl << std::endl;
}

void	testBureaucratLevel(int level){
	try {
		Bureaucrat	bureaucrat("bureaucrat", level);
		
		std::cout << "Bureaucrat init: " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	testIncreaseGrade(int startLevel){
	try {
		Bureaucrat	bureaucrat("bureaucrat", startLevel);

		std::cout << "Bureaucrat init: " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
		bureaucrat.increaseGrade();
		std::cout << "Bureaucrat increaseGrade: " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	testDecreaseGrade(int startLevel){
	try {
		Bureaucrat	bureaucrat("bureaucrat", startLevel);

		std::cout << "Bureaucrat init: " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
		bureaucrat.decreaseGrade();
		std::cout << "Bureaucrat after decrease: " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(void){
	runTest("Bureaucrat level 0", testBureaucratLevel, 0);
	runTest("Bureaucrat level 151", testBureaucratLevel, 151);
	runTest("Bureaucrat level 300", testBureaucratLevel, 300);
	
	runTest("Increase Grade from level 1", testIncreaseGrade, 1);
	runTest("Increase Grade from level 150", testIncreaseGrade, 150);

	runTest("Decrease Grade from level 140", testDecreaseGrade, 140);
	runTest("Decrease Grade from level 1", testDecreaseGrade, 1);
	runTest("Decrease Grade from level 150", testDecreaseGrade, 150);
	return (0);
}