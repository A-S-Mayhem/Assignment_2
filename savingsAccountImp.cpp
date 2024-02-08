
//Implementation File savingsAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "savingsAccount.h"

using namespace std;

savingsAccount::savingsAccount(int acctNumber, double bal, double intRate )
    :bankAccount(acctNumber, bal)
{
    interestRate = intRate;
}

double savingsAccount::getInterestRate() const
{
    return interestRate;
}

void savingsAccount::setInterestRate(double rate)
{
    interestRate = rate;
}

void savingsAccount::withdraw(double amount)
{
    if (balance - amount < 0)
        // write the cout statement
        cout << "Insufficient Balance! - Transaction Denied!" << endl;
    else
        balance = balance - amount;
}

void savingsAccount::postInterest()
{

    // equation for post interest
    balance = balance + balance * interestRate;
}

void savingsAccount::print() const
{
    // print the account information(account number and balance)
    cout << fixed << setprecision(2);
    cout << "Savings ACCT#:\t\t\t" << getAccountNumber()
        << "\tBalance: $" << getBalance() << endl;
}
