# include "../includes/Karen.hpp"

int main(void)
{
	Karen	karen;

	std::cout << "Debug message : " << std::endl;
	karen.complain("debug");
	std::cout << "Info message : " << std::endl; 
	karen.complain("info");
	std::cout << "Warning message : " << std::endl; 
	karen.complain("warning");
	std::cout << "Error message : " << std::endl; 
	karen.complain("error");
	return (0);
}