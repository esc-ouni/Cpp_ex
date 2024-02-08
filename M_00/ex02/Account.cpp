/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:22:10 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 13:01:54 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ){
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount 
              << ";created" 
              << std::endl;
    this->_accountIndex = _nbAccounts;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_nbAccounts++;
};

Account::Account( int initial_deposit ){
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    this->_nbAccounts++;
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount 
              << ";created" 
              << std::endl;
};

int	Account::getNbAccounts( void ){
    return (_nbAccounts);
};

int	Account::getTotalAmount( void ){
    return (_totalAmount);
};

int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
};

int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
};

int		Account::checkAmount( void ) const{
    return (this->_amount);
};

void	Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts 
              << ";total:" << _totalAmount 
              << ";deposits:" << _totalNbDeposits 
              << ";withdrawals:" << _totalNbWithdrawals 
              << std::endl;
};

Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount 
              << ";closed" 
              << std::endl;
};

void	Account::makeDeposit( int deposit ){
    _displayTimestamp();
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    std::cout << "index:" << this->_accountIndex 
              << ";p_amount:" << this->_amount - deposit 
              << ";deposit:" << deposit 
              << ";amount:" << this->_amount 
              << ";nb_deposits:" << this->_nbDeposits 
              << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    if (this->_amount < withdrawal){
        std::cout << "index:" << this->_accountIndex 
                  << ";p_amount:" << this->_amount 
                  << ";withdrawal:refused" 
                  << std::endl;   
        return (false);
    }
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    std::cout << "index:" << this->_accountIndex 
              << ";p_amount:" << this->_amount + withdrawal 
              << ";withdrawal:" << withdrawal 
              << ";amount:" << this->_amount 
              << ";nb_withdrawals:" << this->_nbWithdrawals 
              << std::endl;
    return (true);
};

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount 
              << ";deposits:" << this->_nbDeposits 
              << ";withdrawals:" << this->_nbWithdrawals 
              << std::endl;
};

void	Account::_displayTimestamp( void ){
    clock_t      current_time = time(NULL);
    char        timestamp[20];

    strftime(timestamp, 20, "[%Y%m%d_%H%M%S] ", localtime(&current_time));
    std::cout << timestamp;
};
