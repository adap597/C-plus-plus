//Used in Assignment 5A
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <vector>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "Account.h"

//constructor of checking account, calls constructor of Account
CheckingAccount::CheckingAccount(double initialBalance, double fee) :Account(initialBalance)

{

	myfee = fee;

}
//credit function
void CheckingAccount::credit(double amount)

{

	Account::credit(amount);//constructor of Account calls constructor of credit
	chargeFee();

}
// function to charge fee on debit amount provided the debit amount is valid
bool CheckingAccount::debit(double amount)

{

	if (true == Account::debit(amount))//if debit amount is valid

	{

		chargeFee();//call charge fee

		return true;

	}

	else {

		return false;

	}

}
//chargeFee function 
void CheckingAccount::chargeFee() {

	Account::setBalance(getBalance() - myfee);//set new balance - calls get balance and subtracts fee

}
//constructor of savings account, calls constructor of account
SavingsAccount::SavingsAccount(double initialBalance, double rate) :Account(initialBalance)

{

	myrate = rate;

}
//calculate interest function
double SavingsAccount::calculateInterest()

{

	return getBalance() * myrate; //balance multiplied by interest rate

}
//function to check if initial balance is valid
Account::Account(double initialBalance) {

	if (initialBalance >= 0.0)

		balance = initialBalance;

	else

		cout << "Number is invalid." << endl;

}
//credit function
void Account::credit(double amount)

{

	balance = balance + amount;//new balance is balance plus credit amount

}
//function to check if debit amount is valid
bool Account::debit(double amount)

{

	if (amount > balance) {

		cout << "Error: Debit amount exceeded account balance." << endl;

		return false;

	}

	else {

		balance = balance - amount;

		return true;

	}

}
//set balance function
void Account::setBalance(double newb)

{

	balance = newb;

}
//get balance function
double Account::getBalance()

{

	return balance;

}

