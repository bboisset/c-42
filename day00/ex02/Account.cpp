#include "Account.hpp"
#include <cstdio>
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
}
Account::Account(int initial_deposit)
{
	_displayTimestamp();
}

Account::~Account(void)
{
}
int Account::getNbAccounts(void)
{
	return (0);
}

int Account::getTotalAmount(void)
{
	return (0);
}

int Account::getNbDeposits(void)
{
	return (0);
}

int Account::getNbWithdrawals(void)
{
	return (0);
}

/**
 ** @brief Display account informations with format
 ** accounts:_nbAccounts;total:_totalAmount,deposits:_totalNbDeposits,withdrawals:_totalNbWithdrawals
 ** 
 **/
void Account::displayAccountsInfos(void)
{ //accounts:8;total:20049;deposits:0;withdrawals:0

	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";whithdrawals:"
		<< _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals++;
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";whithdrawals:"
		<< _nbWithdrawals << std::endl;
}

/**
 ** @brief Return the date at format YYYYMMDD_HHMMSS
 ** 
 **/
void Account::_displayTimestamp(void)
{
	char	buffer[80];

	std::time_t rawtime;
	std::tm *timeinfo;
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer;
}
