#include "../includes/Intern.hpp"

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

void	createForms()
{
	Intern	intern;

	AForm *form1 = intern.makeForm("robotomy request", "robot");
	AForm *form2 = intern.makeForm("presidential pardon", "president");
	AForm *form3 = intern.makeForm("shrubbery creation", "shrub");
	AForm *invalidForm = intern.makeForm("invalid form", "invalid target");

	delete form1;
	delete form2;
	delete form3;
	delete invalidForm;
}

int	main(void)
{
	runTest("Creation des 3 formulaires possibles", createForms);
	return (0);
}