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
	std::cout << "test\n";
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
}

bool Account::makeWithdrawal