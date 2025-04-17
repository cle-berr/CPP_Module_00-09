/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:45:51 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/17 14:32:51 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = getNbAccounts();
	this->_nbAccounts++;
	_totalAmount+= initial_deposit;
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex
				<< ";amount:" << checkAmount() << ";created"
				<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex
				<< ";amount:" << checkAmount()
				<< ";closed" 
				<< std::endl;
	return;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
	return;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > checkAmount())
	{
		std::cout	<< " index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:" << "refused"
				<< std::endl;
		return false;
	}
	else
	{
			std::cout	<< " index:" << _accountIndex
					<< ";p_amount:" << checkAmount()
					<< ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout	<< ";amount:" << _amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		return true;
	}
}

int	Account::checkAmount() const
{
	return _amount;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";p_amount:" << checkAmount()
				<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout	<< ";amount:" << _amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(NULL);
    std::tm timeinfo = *std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", &timeinfo);
    std::cout << buffer;
}