#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstdio>

Account::Account() :
_accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{

}

Account::Account(int initial_deposit) :
_accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = _nbAccounts++;
    std::cout << "[19920104_091532]";
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
    _totalAmount += _amount;
}

Account::~Account()
{
    std::cout << "[19920104_091532]";
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return t::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return t::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return t::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return t::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    // _displayTimestamp();
    std::cout << "[19920104_091532]";
    std::cout << " accounts:" << t::_nbAccounts;
    std::cout << ";total:" << t::_totalAmount;
    std::cout << ";deposits:" << t::_totalNbDeposits;
    std::cout << ";withdrawals:" << t::_totalNbWithdrawals;
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    std::cout << "[19920104_091532]";
    // _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount + deposit;
    std::cout << ";nb_deposits:" << _nbDeposits;
    std::cout << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << "[19920104_091532]";
        // _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if (_amount - withdrawal < 0) {
        std::cout << "refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    std::cout << withdrawal;
    std::cout << ";amount:" << _amount - withdrawal;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
   // std::cout << "[19920104_091532]";
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer [80];
    std::string s;

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    std::strftime(buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
    s = buffer;
    std::cout << s;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

