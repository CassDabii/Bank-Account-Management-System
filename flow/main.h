#pragma once
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

class Account{
    private:
        string name;
        double initialBalance;
        double accountBalance;

    public:
        Account(string name,double initialBalance, double accountBalance);
        ~Account();
        double depositMoney();
        double withdrawMoney();
        double checkBalance();

};

