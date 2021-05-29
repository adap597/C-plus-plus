//Used in Assignment 4 B
//Derived classes Savings and Checking Account

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include "BankAccount.h"
using namespace std;

//define SavingsAccount class with extending BankAccount
class SavingsAccount : public BankAccount
{
protected:
    double interestRate;//data member to hold interest rate

public:
    //Constructor of SavingsAccount, calls constructor of BankAccount 
    SavingsAccount(double bal, double rate) :BankAccount(bal)
    {
        interestRate = rate;
    }

    //function to calculate interest rate   
    double calculateInterest()
    {
        return balance * interestRate;
    }

};


class CheckingAccount : public BankAccount
{
protected:
    double fee;//data memeber to hold fee

public:
    //Constructor of CheckingAccount, calls constructor of BankAccount 
    CheckingAccount(double bal, double feeTrans) :BankAccount(bal)
    {
        fee = feeTrans;
    }

    //function to apply transaction fee on crediting amount
    void credit(double amount)
    {
        BankAccount::credit(amount);
        balance = balance - fee;
    }

    //function to apply transaction fee on debiting amount
    void debit(double amount)
    {
        bool withdrawn = BankAccount::debit(amount);
        if (withdrawn)
        {
            balance = balance - fee;
        }
    }
};
