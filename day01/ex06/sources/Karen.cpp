#include "../includes/Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::insignificant(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::cout << std::endl;
}

/**
 * @brief Call Karen function by their name
 * 
 * @param level 
 */
void	Karen::complain(std::string level)
{
	int	i(0);
	std::string	complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	void	(Karen::* complaintsType [])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	void	(Karen::*complaint)(void);

	if (m_maxLevelVal == -1)
		this->insignificant();
	else
	{
		for (i = m_maxLevelVal;i < 4; i++)
		{
			if (level == complaintLevels[i])
				(this->*(complaintsType[i]))();
		}
	}

}

Karen::Karen(std::string maxLevel)
	: m_maxLevel(maxLevel), m_maxLevelVal(-1)
{
	std::string	complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	std::transform(m_maxLevel.begin(), m_maxLevel.end(), m_maxLevel.begin(), ::toupper);
	for (int i(0); i < 4; i++)
	{
		if (maxLevel == complaintLevels[i])
			m_maxLevelVal = i;
	}
}