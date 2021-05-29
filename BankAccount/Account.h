//Used in Assignment 5A
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Base class Account definition
#include <iostream>
#include <vector>
#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;

class Account {
//public data members for credit, debit, set balance and get balance functions
public:

	Account(double);//Account prototype

	virtual void credit(double);//virtual credit prototype

	virtual bool debit(double);//virtual debit prototype

	void setBalance(double);//set balance prototype

	double getBalance();//get balance prototype

//private data member for balance
private:

	double balance;

};

#endif
