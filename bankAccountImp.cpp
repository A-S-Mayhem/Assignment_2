
//Implementation file bankAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount(int acctNumber, double bal)
{
    //assign member variables to the parameter
    accountNumber = acctNumber;
    balance = bal;
}

void bankAccount::setAccountNumber(int acct)
{
    accountNumber = acct;
}

int bankAccount::getAccountNumber() const
{
    //return account number
    return accountNumber;
}

double bankAccount::getBalance() const
{
    return balance;
}

// withdraw member function definition
void bankAccount::withdraw(double amount)
{
    
    balance = balance - amount;


}

void bankAccount::deposit(double amount)
{
    // equations for depositing balance
    balance = balance + amount;
}

void bankAccount::print() const
{
    cout << fixed << setprecision(2);
    cout << accountNumber << " balance : $"
        << balance << endl;
}
