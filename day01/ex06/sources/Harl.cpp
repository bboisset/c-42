#include "../includes/Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::insignificant(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int Harl::getLevelIndex(std::string level)
{
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complaintLevels[i] == level)
			return (i);
	}
	return (-1);
}

/**
 * @brief Call Harl function by their name
 *
 * @param level
 */
void Harl::complain()
{
	switch (this->_maxLevelVal)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			this->insignificant();
			break;
	}
}

Harl::Harl(std::string maxLevel)
	: _maxLevel(maxLevel), _maxLevelVal(-1)
{
	_maxLevelVal = getLevelIndex(maxLevel);
}