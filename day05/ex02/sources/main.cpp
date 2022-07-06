#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
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

void	testShurbberySuccess()
{
	Bureaucrat	god("god", 1);
	ShrubberyCreationForm	gardenForm("garden");

	god.signForm(gardenForm);
	god.executeForm(gardenForm);
	god.executeForm(gardenForm);
}

void	internSigns()
{
	ShrubberyCreationForm	gardenForm("garden");
	RobotomyRequestForm		robotForm("robot");
	PresidentialPardonForm	presidentForm("president");
	Bureaucrat				intern("intern", 140);

	try {
		intern.signForm(gardenForm);
		intern.signForm(robotForm);
		intern.signForm(presidentForm);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void	differnSignsExecute()
{
	RobotomyRequestForm		robotForm("robot");
	Bureaucrat				cto("cto", 72);
	Bureaucrat				boss("boss", 45);

	cto.signForm(robotForm);
	boss.executeForm(robotForm);
}

void	testRobotomySuccess()
{
	Bureaucrat	god("god", 1);
	RobotomyRequestForm	robotForm("robot");

	god.signForm(robotForm);
	god.executeForm(robotForm);
	god.executeForm(robotForm);
	god.executeForm(robotForm);
	god.executeForm(robotForm);
}

void	testPresidentialForm()
{
	Bureaucrat	god("god", 1);
	PresidentialPardonForm	presidentForm("bazar");

	god.signForm(presidentForm);
	god.executeForm(presidentForm);
}

int	main(void){
	runTest("Sign and execute Shrubbery form with grade 1, (exec x2)", testShurbberySuccess);
	runTest("Sign and execute Robotomy form with grade 1, (exec x4)", testRobotomySuccess);
	runTest("Sign and execute Presidential form with grade 1, (exec x1)", testPresidentialForm);
	runTest("Intern signs forms", internSigns);
	runTest("CTO and Boss execute forms with exact level", differnSignsExecute);
	return (0);
}