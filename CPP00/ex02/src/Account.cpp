/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:51:17 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/12 16:18:58 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += _amount;

	this->_displayTimestamp();
	std::cout <<" index:" <<_accountIndex;
	std::cout <<";amount:" <<_amount;
	std::cout <<";created" <<std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout <<" index:" <<_accountIndex;
	std::cout <<";amount:" <<_amount;
	std::cout <<";closed" <<std::endl;

}

void	Account::_displayTimestamp(void)
{
	std::time_t	currentTime;
	char	buffer[19];

	std::time(&currentTime);
	std::strftime(buffer, 19, "[%Y%m%d_%H%M%S]", std::localtime(&currentTime));
	std::cout << buffer;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout <<" accounts:" <<Account::getNbAccounts();
	std::cout <<";total:" <<Account::getTotalAmount();
	std::cout <<";deposits:" <<Account::getNbDeposits();
	std::cout <<";withdrawals:" <<Account::getNbWithdrawals();
	std::cout <<std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout <<" index:" <<this->_accountIndex;
	std::cout <<";amount:" <<this->_amount;
	std::cout <<";deposits:" <<this->_nbDeposits;
	std::cout <<";withdrawals:" <<this->_nbWithdrawals;
	std::cout <<std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;

	Account::_displayTimestamp();
	std::cout <<" index:" <<this->_accountIndex;
	std::cout <<";p_amount:" <<this->_amount;
	std::cout <<";deposit:" <<deposit;
	std::cout <<";amount:" <<this->_amount + deposit;
	std::cout <<";nb_deposits:" <<this->_nbDeposits;
	std::cout <<std::endl;

	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout <<" index:" <<this->_accountIndex;
	std::cout <<";p_amount:" <<this->_amount;
	
	if (withdrawal > Account::_amount)
	{
		std::cout <<";withdrawal:refused" <<std::endl;
		return (false);
	}

	this->_nbWithdrawals++;
	
	std::cout <<";withdrawal:" <<withdrawal;
	std::cout <<";amount:" <<this->_amount - withdrawal;
	std::cout <<";nb_withdrawals:" <<this->_nbWithdrawals;
	std::cout <<std::endl;
	
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	
	return (true);
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}