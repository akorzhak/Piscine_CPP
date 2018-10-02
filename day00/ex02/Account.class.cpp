#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_nbAccounts += 1;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created\n";
}

Account::Account( int initial_deposit )
{
	_nbAccounts += 1;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	_totalNbDeposits += this->_nbDeposits;
	this->_nbWithdrawals = 0;
	_totalNbWithdrawals += this->_nbWithdrawals;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created\n";
}

Account::~Account(void)
{
	_nbAccounts -= 1;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

int		Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		rawTime;
	struct tm	*localTime;
	char		formatTime[31];

	time(&rawTime);
	localTime = localtime(&rawTime);
	strftime(formatTime, sizeof(formatTime), "[%Y%d%m_%H%M%S]", localTime);
	std::cout << formatTime;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	this->_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount - deposit << ";deposit:" << deposit << ";amount:"
		<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();

	if (withdrawal > this->_amount)
	{
	 	std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:refused\n";
		return false;
	}

	this->_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;

	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount + withdrawal
		<< ";withdrawal:" << withdrawal << ";amount:"
		<< this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
	return true;
}
