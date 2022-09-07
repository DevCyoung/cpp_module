#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = Account::_nbAccounts;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';' << "created" << std::endl;
	Account::_nbAccounts++;
}
Account::~Account(void)
{
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

int Account::getNbAccounts(void)
{
	std::cout << "int Account::getNbAccounts(void)" << std::endl;
	return 1;
}
int Account::getTotalAmount(void)
{
	std::cout << "int Account::getTotalAmount(void)" << std::endl;
	return 1;
}
int Account::getNbDeposits(void)
{
	std::cout << "int Account::getNbDeposits(void)" << std::endl;
	return 1;
}
int Account::getNbWithdrawals(void)
{
	std::cout << "int Account::getNbWithdrawals(void)" << std::endl;
	return 1;
}
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ';' 
	<< "total:" << Account::_totalAmount << ';' << "deposits:"
	<< Account::_totalNbDeposits << ';' << "withdrawals:" 
	<< Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	++_totalNbDeposits;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' 
	<< "p_amount:" << _amount << ';' << "deposit:"
	<< deposit << ';';
	_amount += deposit;
	std::cout << "amount:" << _amount << ';' << "nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{	
	Account::_displayTimestamp();
	if (_amount < withdrawal || withdrawal <= 0)
	{
		std::cout << " index:" << _accountIndex << ';'
		<<"p_amount:" << _amount << ';' << "withdrawal:refused" <<std::endl;
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		std::cout << " index:" << _accountIndex << ';'
		<<"p_amount:" << _amount << ';' << "withdrawal:" << withdrawal << ';';
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << _amount << ';' << "nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
	}
	return true;
}
int Account::checkAmount(void) const
{
	return 1;
}
void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "deposits:"
	<< _nbDeposits << ';' << "withdrawals:" 
	<< _nbWithdrawals << std::endl;
}
