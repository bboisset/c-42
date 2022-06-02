#include "Account.hpp"

Account::Account(void)
{}

Account::Account(int initial_deposit)
{
}

Account::~Account(void)
{
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
}

int		Account::checkAmount(void) const
{
	
}

void	Account::displayStatus(void) const
{

}

void	_displayTimestamp(void)
{

}
