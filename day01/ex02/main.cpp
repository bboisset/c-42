# include <string>
# include <iostream>

/**
 * @todo Le programme semble fonctionner à 100%, mais la valeur de string
 * semble differente de stringPTR et stringRef (dernier element)
 */
void	brainAddress(void)
{
	std::string		speech("HI THIS IS BRAIN");
	std::string		*stringPTR(&speech);
	std::string		&stringREF(speech);

	std::cout << "Adress of the string in memory	: " << &stringPTR << std::endl;
	std::cout << "Adress stock by stringPTR	: " << stringPTR << std::endl;
	std::cout << "Adress stock by stringREF	: " << &stringREF << std::endl;

	std::cout << "Value of string			: " << speech << std::endl;
	std::cout << "Value of string by stringPTR	: " << *stringPTR << std::endl;
	std::cout << "Value of string by stringREF	: " << stringREF << std::endl;
}

int main(void)
{
	brainAddress();
	return (0);
}