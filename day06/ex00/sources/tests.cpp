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
	runTest("double Min", fullConversion, "-1.7976931348623157e+308");//resultat tres long
	runTest("double Max", fullConversion, "1.7976931348623157e+308");//resultat tres long pour double
	runTest("float Min", fullConversion, "-3.402823466e+38");
	runTest("float Max", fullConversion, "3.402823466e+38");
}

void	testValid()
{
	runTest("int 0", fullConversion, "0");
	runTest("int 123", fullConversion, "123");
	runTest("int -123", fullConversion, "-123");
	runTest("double 0.0", fullConversion, "0.0");//not working over char
	runTest("double 123.0", fullConversion, "123.0");
	runTest("double -123.0", fullConversion, "-123.0");
	runTest("float 0.0f", fullConversion, "0.0f");
	runTest("float 123.0f", fullConversion, "123.0f");
	runTest("float -123.0f", fullConversion, "-123.0f");
}

void	testNaninf()//resulat bizare avec les int
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