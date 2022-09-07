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
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "created" << std::endl;
	Account::_nbAccounts++;
}
Account::~Account(void)
{
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';' 
	<< "amount:" << _amount << "closed" << std::endl;
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
	//[19920104_0914532] accounts:8;total:20049;deposits:0;withdrawals:0
	//[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0

	std::cout << "[19920104_091532] " << "accounts:" << Account::_nbAccounts << ';' 
	<< "total:" << Account::_totalAmount << ';' << "deposits:"
	<< Account::_totalNbDeposits << ';' << "withdrawals:" 
	<< Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

	++_nbDeposits;
	++_totalNbDeposits;
	_totalAmount += deposit;
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';' 
	<< "p_amount:" << _amount << ';' << "deposit:"
	<< deposit << ';';
	_amount += deposit;
	std::cout << "amount:" << _amount << ';' << "nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{	
	//[19920104_091532] index:0;p_amount:47;withdrawal:refused
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

	if (_amount < withdrawal || withdrawal <= 0)
	{
		std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';'
		<<"p_amount:" << _amount << ';' << "withdrawal:refused" <<std::endl;
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';'
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
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "deposits:"
	<< _nbDeposits << ';' << "withdrawals:" 
	<< _nbWithdrawals << std::endl;
}
