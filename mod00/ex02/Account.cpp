#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(){
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

int Account::checkAmount() const{
	if (this->_amount < 0)
		return (1);
	return (0);
}


void Account::displayAccountsInfos(){
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "acounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const{
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "index:" << this->_accountIndex << ";account:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
	this->_nbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "index:" << this->_accountIndex << ";p_account:" << this->_amount - deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}


bool Account::makeWithdrawal( int withdrawal ){
	std::time_t now = std::time(0);
	struct tm* local_time = std::localtime(&now);
	std::cout << "[" << local_time->tm_year << local_time->tm_mon << local_time->tm_mday << "_";
	std::cout << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
	std::cout << "index:" << this->_accountIndex << ";p_account:" << this->_amount;
	this->_amount -= withdrawal;
	if (checkAmount())
	{
		this->_amount += withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_totalAmount-=withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << "amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}