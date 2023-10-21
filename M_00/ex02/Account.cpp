/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:22:10 by idouni            #+#    #+#             */
/*   Updated: 2023/10/21 14:14:37 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
    // _displayTimestamp();
    return (_nbAccounts);
};

int	Account::getTotalAmount( void ){
    // _displayTimestamp();
    return (_totalAmount);
};

Account::Account( void ){
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    this->_nbAccounts++;
};

int	Account::getNbDeposits( void ){
    // _displayTimestamp();
    return (_totalNbDeposits);
};

int	Account::getNbWithdrawals( void ){
    // _displayTimestamp();
    return (_totalNbWithdrawals);
};

void	Account::displayAccountsInfos(void){
    // _displayTimestamp();
    // std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
};

Account::Account( int initial_deposit ){
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    this->_nbAccounts++;
};

Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
};

void	Account::makeDeposit( int deposit ){
    // _displayTimestamp();
    this->_amount += deposit;
    this->_nbDeposits++;
};

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    if (this->_amount < withdrawal){
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;   
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
};

int		Account::checkAmount( void ) const{
    // _displayTimestamp();
    return (this->_amount);
};

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
};

void	Account::_displayTimestamp( void ){
    time_t		now = time(NULL);
    struct tm	tstruct;
    char		time[20];
    
    tstruct = *localtime(&now);
    strftime(time, 20, "[%Y%m%d_%H%M%S] ", &tstruct);
    std::cout << time;
    
};
