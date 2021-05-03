
//Used in Assignment 3 B
//Class SavingsAccount

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN


#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount {
	static int annualInterestRate; // static int to store annual interest rate
private:
	double saverOne, temp1, tempAcct1, totalBal1;// saverOne and saverTwo are variables for the savings account balance
	double saverTwo, temp2, tempAcct2, totalBal2;//temp1, temp2, tempAcct1, tempAcct2 are variables to store interest calculations
	//totalBal1 and totalBal2 store the savings account balance after 1 month of interest is applied
public:
	void initialAccountBalance();// stores initial account balance entered by the user
	void initialIntRate();// stores interest rate provided by the user
	void calcMonthlyInterest();// calculates the monthly interest
	void calcTotalInt(); //calculates the total account balance after 1 months of interest
	void displayAccount();//display monthly interest, and ending balance after one month of interest is applied
	
};
#endif
