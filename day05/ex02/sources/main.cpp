#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

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

void	blankForm(void) {
	Form blankForm = Form();
	
	std::cout << blankForm << std::endl;
}

void	NamedForm(void) {
	Form b12 = Form("b12", 100, 100);

	std::cout << b12 << std::endl;
}

/**
 * @brief Sign a form with
 * a bureaucrat having permissions to sign it.
 */
void	classicFormSign(void){
	Form b12 = Form("b12", 100, 100);
	Bureaucrat god = Bureaucrat("god", 1);

	std::cout << god << std::endl;
	std::cout << b12 << std::endl;
	god.signForm(b12);
}

/**
 * @brief Sign a form with a Bureaucrat
 * who has not enough permissions to sign it.
 */
void	insufficientGrade(void) {
	Bureaucrat intern = Bureaucrat("intern", 150);
	Form a16 = Form("a16", 100, 100);

	std::cout << intern << std::endl;
	std::cout << a16 << std::endl;
	intern.signForm(a16);
}

/**
 * @brief Sign a form with a Bureaucrat
 * who has the same grade as the form's grade.
 */
void	sameGrade(void){
	Bureaucrat john = Bureaucrat("john", 120);
	Form c14 = Form("c14", 120, 120);

	std::cout << john << std::endl;
	std::cout << c14 << std::endl;
	john.signForm(c14);
}

void	insufficientGradeUpgrade(void){
	Bureaucrat intern = Bureaucrat("intern", 150);
	Form a16 = Form("a16", 149, 149);

	std::cout << intern << std::endl;
	std::cout << a16 << std::endl;
	intern.signForm(a16);
	intern.increaseGrade();
	intern.signForm(a16);
}

int	main(void){
	runTest("Initalizing blankForm", blankForm);
	runTest("Initalizing form b12", NamedForm);
	runTest("Signing form a16 with suffisent permissions", classicFormSign);
	runTest("Signing form a16 with insufficient permissions", insufficientGrade);
	runTest("Signing form c14 with same bureaucrat grade as form", sameGrade);
	runTest("Signing form a16 with insufficient permissions and upgrading bureaucrat grade and sign it again", insufficientGradeUpgrade);
	return (0);
}