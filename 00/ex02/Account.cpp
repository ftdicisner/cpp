/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 00:00:17 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/05 23:28:27 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>

#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

// Get date string in this  format [19920104_091532]
void	Account::_displayTimestamp(void) {
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year 
		<< ltm->tm_mon 
		<< ltm->tm_mday 
		<< "_" 
		<< ltm->tm_hour 
		<< ltm->tm_min
		<< ltm->tm_sec
		<< "] ";
}

// Account constructor
Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" 
		<< _accountIndex << ";amount:" 
		<< initial_deposit << ";created" << std::endl;
	_nbAccounts++;
}

// Display Accounts info
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts; 
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Display single account info
void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" 
		<< _accountIndex << ";amount:" 
		<< _amount << ";deposits:" 
		<< _nbDeposits << ";withdrawals:" 
		<< _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";placed:" << deposit << std::endl;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if ( withdrawal > _amount ) {
		std::cout << "refused" << std::endl;
		return ( false );
	}
	std::cout << withdrawal;
	_amount -= withdrawal;
	std::cout << ";amount:" << _amount;
	_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals++;

	return true;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
	_nbAccounts--;
}
