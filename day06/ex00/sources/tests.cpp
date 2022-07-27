# include "../includes/convert.hpp"

void	fullConversion(std::string litteral)
{
	std::string type = getLitteralType(litteral);
	convert(litteral, type);
}

void	waitUserInput(){
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.get();
}

void	runTest(std::string testName, void (*test)(std::string), std::string litteral) {
	waitUserInput();
	std::cout << std::endl << "Running test: " << testName << std::endl;
	test(litteral);
}

void	testLimits()
{
	runTest("int Min", fullConversion, "-2147483648");
	runTest("int Max", fullConversion, "2147483647");
	runTest("double Min", fullConversion, "-1.7976931348623157e+308");//not working
	runTest("double Max", fullConversion, "1.7976931348623157e+308");//not working
	runTest("float Min", fullConversion, "-3.402823466e+38");//not working
	runTest("float Max", fullConversion, "3.402823466e+38");//not working
}

void	testValid()
{
	runTest("int 0", fullConversion, "0");
	runTest("int 123", fullConversion, "123");
	runTest("int -123", fullConversion, "-123");
	runTest("double 0.0", fullConversion, "0.0");//not working
	runTest("double 123.0", fullConversion, "123.0");//not working
	runTest("double -123.0", fullConversion, "-123.0");//not working
	runTest("float 0.0f", fullConversion, "0.0f");//not working
	runTest("float 123.0f", fullConversion, "123.0f");//not working
	runTest("float -123.0f", fullConversion, "-123.0f");//not working
}

void	testNaninf()
{
	runTest("-inff", fullConversion, "-inff");
	runTest("+inff", fullConversion, "+inff");
	runTest("nanf", fullConversion, "nanf");
	runTest("-inf", fullConversion, "-inf");
	runTest("+inf", fullConversion, "+inf");
	runTest("nan", fullConversion, "nan");
}

int	main(void)
{
	testLimits();
	testValid();
	testNaninf();
	return (0);
}