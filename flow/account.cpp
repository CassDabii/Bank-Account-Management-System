#include "main.h"

Account::Account(string fullname, double inital, double balance)
    : name(fullname), initialBalance(inital),  accountBalance(balance)
    {

    }

Account::~Account()
{
}

double Account::depositMoney(){
    double deposit;
    cout << "How much would you like to deposit: "<< endl;
    cin >> deposit;
    accountBalance += deposit;
    cout << "Your new account balance is " << endl;
    cout << accountBalance << endl;
    return accountBalance;
}

double Account::withdrawMoney(){
    double withdrawl;
    cout << "How much would you like to withdraw: "<< endl;
    cin >> withdrawl;
    accountBalance -= withdrawl;
    cout << "Your new account balance is ";
    cout << accountBalance << endl;
    return accountBalance;
}

double Account::checkBalance(){
    cout << "Your  account balance is " << endl;
    cout << accountBalance << endl;
    return accountBalance;
}
