/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:22:10 by idouni            #+#    #+#             */
/*   Updated: 2023/10/21 11:57:57 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"

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

void	Account::displayAccountsInfos( void ){
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
};

Account::Account( int initial_deposit ){
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    this->_amount = initial_deposit;
};

Account::~Account( void ){
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
};

void	Account::makeDeposit( int deposit ){
    this->_amount += deposit;
};

bool	Account::makeWithdrawal( int withdrawal ){
    if (this->_amount < withdrawal)
        return (false);
    this->_amount -= withdrawal;
    return (true);
};

int		Account::checkAmount( void ) const{
    return (this->_amount);
};

void	Account::displayStatus( void ) const{
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
};

void	Account::_displayTimestamp( void ){
    std::cout << "[" << __TIMESTAMP__ << "]" << std::endl;
};
