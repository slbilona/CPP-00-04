#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

void Account::displayAccountsInfos()
{
	std::cout << "[date] accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "[date] index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	}
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "[date] index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	if ((_amount - withdrawal) >= 0)
	{
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		return true;
	}
	else
		return false;
}

void Account::displayStatus(void) const
{
	std::cout << "display\n";
}

Account::~Account ()
{
	std::cout << "[date] index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}