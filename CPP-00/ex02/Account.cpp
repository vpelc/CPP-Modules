/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:46:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/06 20:26:43 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _nbAccounts << ";amount:" << _totalAmount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void ){}

void	Account::_displayTimestamp( void )
{
	
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
void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	
}
bool	Account::makeWithdrawal( int withdrawal )
{
	return ;	
}
int		Account::checkAmount( void ) const
{
	return ;
}
void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _nbAccounts << ";amount:" << _totalAmount;
	std::cout << ";created" << std::endl;
}