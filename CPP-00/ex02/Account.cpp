/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:46:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 13:05:55 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*
	Constructor : creates the object (account)
	And 	.displays timestamp
			.initializes the index of the account 
				and increases total of accounts
			.initializes the amount of the account 
				and adds it to the total amount
			.initializes number of deposits and withdrawals to 0
			.displays : index | amount and that it's created
*/
Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

/*
	Destructor : destroys the objects (account)
	And 	.displays timestamp
			.displays : index | amount and that it's closed
*/
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

/*
	Displays the timestamp in the format [YYYYMMDD_hhmmss]
*/
void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(NULL);
	std::tm *time_ptr = std::localtime(&result);
	std::cout << "["  << (time_ptr->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (time_ptr->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << time_ptr->tm_mday << "_"
	<< std::setw(2) << std::setfill('0') << time_ptr->tm_hour
	<< std::setw(2) << std::setfill('0') << time_ptr->tm_min
	<< std::setw(2) << std::setfill('0') << time_ptr->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

/*

	Displays : 	.timestamp
				.number of accounts | total of the amounts 
				| total of deposits | total of withdrawals
*/
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	
}

/*
	.displays timestamp
	.increases the amount of the account by the arg: deposit
		and the total amount
	.increases the amount of the number of deposits 
		and the total of deposits
	.displays : index | old amount | deposit 
		| new amount | number of deposits
*/
void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;

	/*if (deposit < 0)	//--> Added security to prevent 
		return;			//negative amounts on the deposits	*/
	_displayTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

/*
	.displays timestamp
	.decreases the amount of the account by the arg: withdrawal
		and the total amount
	.increases the amount of the number of withdrawals 
		and the total of withdrawals
	.displays : index | old amount | deposit 
		| new amount | number of withdrawals
*/
bool	Account::makeWithdrawal( int withdrawal )
{
	/*if (withdrawal < 0)	//--> Added security to prevent 
		return;				//negative amounts on the withdrawal	*/
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << ":refused" << std::endl;
		return 0;
	}
	else
		std::cout << withdrawal;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return 1;
}
int		Account::checkAmount( void ) const
{
	return _amount;
}

/*
	.displays timestamp
	.displays : index | amount | 
		number of deposits | number of withdrawals
*/
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:"  << _nbWithdrawals << std::endl;
}