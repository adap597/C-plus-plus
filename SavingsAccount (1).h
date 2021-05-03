//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Derived class Savings Account definition
#include <iostream>
#include <vector>
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount:public Account//public inheritance from Account

{
//public data members for savings account and calculate interest function
public:

	SavingsAccount(double, double);

	double calculateInterest();
//private data member for interest rate
private:

	double myrate;

};
#endif

