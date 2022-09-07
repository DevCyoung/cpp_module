#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = Account::getNbAccounts();
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';' << "created" << std::endl;
	Account::_nbAccounts++;
}
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}
int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}
int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals(void)
{
	
	return Account::_totalNbWithdrawals;
}
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:"		<< Account::_nbAccounts      << ';' 
			  << "total:"       	<< Account::getTotalAmount() << ';' 
			  << "deposits:"    	<< Account::getNbDeposits()  << ';' 
			  << "withdrawals:"		<< Account::getNbWithdrawals()	<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	++_totalNbDeposits;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout 	<< " index:"		<< _accountIndex			<< ';' 
				<< "p_amount:"		<< _amount					<< ';' 
				<< "deposit:"		<< deposit 					<< ';';
	_amount += deposit;
	std::cout	<< "amount:"		<< _amount 					<< ';' 
				<< "nb_deposits:"	<< _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{	
	Account::_displayTimestamp();
	if (_amount < withdrawal || withdrawal <= 0)
	{
		std::cout	<< " index:"	<< _accountIndex			<< ';'
					<<"p_amount:"	<< _amount					<< ';' 
					<< "withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		std::cout	<< " index:"	<< _accountIndex 			<< ';'
					<<"p_amount:" 	<< _amount 		 			<< ';'
					<< "withdrawal:"<< withdrawal	 			<< ';';
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout	<< "amount:"	<< _amount 					<< ';' 
					<< "nb_withdrawals:" << _nbWithdrawals		<< std::endl;
		return true;
	}
	return true;
}
int Account::checkAmount(void) const
{
	return _amount;
}
void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' 
	<< "amount:" << _amount << ';' << "deposits:"
	<< _nbDeposits << ';' << "withdrawals:" 
	<< _nbWithdrawals << std::endl;
}
