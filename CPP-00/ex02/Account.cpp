#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

void Account::displayAccountsInfos()
{
	std::cout << "[date] \n";
	[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
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
	std::cout << "[date] index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	if ((_amount - withdrawal) >= 0)
		return true;
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