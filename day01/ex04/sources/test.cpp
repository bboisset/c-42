#include "../includes/betterSed.hpp"

void    createFile(std::string fileName, std::string content)
{
	std::cout << "Creating " << fileName << std::endl;
	std::cout << "Content : " << content << std::endl;
    std::ofstream file(fileName);
    file << content;
}

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)(std::string, 
	std::string, std::string), std::string fileName, std::string pattern, std::string replacement)
{
	std::cout << "Running test: " << testName << std::endl;
	waitUserInput();
	test(fileName, pattern, replacement);
	std::cout << "Test " << testName << " donned!"
		<< std::endl << std::endl;
}

int main(void)
{
    createFile("./data/test.txt", "abc lol abc lol");
	runTest("replacing lol => abc. All should be abc", replaceFile, "./data/test.txt", "lol", "abc");
	createFile("./data/test.txt", "abc lo abc loabcl");
	runTest("replacing lol => abc. Nothing should be replaced", replaceFile, "./data/test.txt", "lol", "abc");
	createFile("./data/test.txt", "a b c d e f g h i j k");
	runTest("replacing a => b", replaceFile, "./data/test.txt", "a", "b");
	createFile("./data/test.txt", "a b c d e f g h i j k");
	runTest("replacing a => b", replaceFile, "./data/test.txt", " ", "+");
	return (0);
}
