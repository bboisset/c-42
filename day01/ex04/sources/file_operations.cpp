std::vector<std::string>	readFile(std::string FileName, std::string pattern, std::string replacement)
{
	int							i(0);
	std::ifstream				file(FileName);
	std::vector<std::string>	fileLines;
	std::string					line;

	while (getline(file, line))
    {
		fileLines.push_back(line);
    }
	file.close();//on ferme le fichier
	return (fileLines);
}

std::string replaceLine(std::string line, std::string pattern, std::string replacement)
{
	
}
/**
 * ALGO
 * - Avancer dans le fichier caractere par caractere
 * - copier caractere f2
 * - Si caractere courant match
 * 	- on copie le caractere dans un string
 * 	- si tout match
 * 		- Ecriture de replacement dans f2
 * 		- suppression du string
 * 	- si différent
 * 		- ecriture du string dans f2
 * 
 */