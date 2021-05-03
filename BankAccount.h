//Used in Assignemnt 4 B
//Base class Bank Account definition and header file.

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
using namespace std;
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
protected:
    double balance; //declare data member to hold balance

public:
    //Constructor for initial balance
    BankAccount(double bal)
    {
        //Check if balance is valid
        if (bal >= 0)
        {
            balance = bal;
        }
        else if (bal < 0)
        {
            balance = 0;
            cout << "\nError. Initial balance is invalid.";
        }

    }


    //credit function 
    void credit(double amount)
    {
        balance = balance + amount;
    }

    //debit function
    bool debit(double amount)
    {
        //check if debit amount is valid
        if (amount > balance)
        {
            cout << "\nError. The balance is less than the debit amount";
            return false;
        }
        else
        {
            balance = balance - amount;
            return true;
        }
    }

    //get Balance function
    double getBalance()
    {
        return balance;
    }

};
#endif
