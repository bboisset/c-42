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

	std::cout << *form1 << std::endl << std::endl;
	std::cout << *form2 << std::endl << std::endl;
	std::cout << *form3 << std::endl << std::endl;

	delete form1;
	delete form2;
	delete form3;
}

/**
 * `delete invalidForm` will never be executed because of the exception.
 * thrown by `intern.makeForm`.
*/
void	invalid_form()
{
	Intern	intern;

	try {
		AForm *invalidForm = intern.makeForm("invalid form", "invalid");
		delete invalidForm;
	} catch (std::exception &e) {
		std::cout << "Exception catch : " << e.what() << std::endl;
	}
}

int	main(void)
{
	runTest("Creating 3 valid form", createForms);
	runTest("Creating an invalid form", invalid_form);
	return (0);
}