/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:11:03 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/14 23:37:58 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //


/** **********************************************************************
 * PUBLIC
*/

Account::Account( int initial_deposit ) {
	// Private vars set
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	// Static vars set
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	// Print log
	// [19920104_091532] index:0;amount:42;created
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {
	// Print log
	// [19920104_091532] index:0;amount:47;closed
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
}


void	Account::makeDeposit( int deposit ) {
	// Private vars set
	this->_accountIndex = this->getNbAccounts();
	this->_amount = deposit;
	this->_nbDeposits++;
	// this->_nbWithdrawals;

	// Static vars set
	// Account::_nbAccounts;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	// Account::_totalNbWithdrawals;
}

bool	Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void	Account::displayStatus( void ) const {

}


/** **********************************************************************
 * STATIC
*/

/** static */
int	Account::_nbAccounts = 0;
int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

/** static */
int	Account::_totalAmount = 0;
int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

/** static */
int	Account::_totalNbDeposits = 0;
int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

/** static */
int	Account::_totalNbWithdrawals = 0;
int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

/** static */
void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << " " << std::flush;
	std::cout << "acccounts:" << Account::getNbAccounts() << ";" << std::flush;
	std::cout << "total:" << Account::getTotalAmount() << ";" << std::flush;
	std::cout << "deposits:" << Account::getNbDeposits() << ";" << std::flush;
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return;
}

void	Account::_displayTimestamp( void ) {
	time_t	time_now;
	tm		*local_time_now;
	
	time_now = std::time(0);
	local_time_now = std::localtime(&time_now);
	std::cout << std::put_time(local_time_now, "[%Y%m%d_%H%M%S]") << std::flush;
	return;
}


/** **********************************************************************
 * PRIVATE
*/



/** */
Account::Account( void ) {
	//
}
