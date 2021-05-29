//Used in Assignment 5A
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

// Derived class Checking Account definition
#include <iostream>
#include <vector>
#include "Account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount : public Account//public inheritance from Account

{
// public data members for credit, debit, charge fee function and Checking Account
public:

	CheckingAccount(double, double);

	void credit(double);

	bool debit(double);

	void chargeFee();
// private data member for the fee amount
private: 

	double myfee;

};
#endif

