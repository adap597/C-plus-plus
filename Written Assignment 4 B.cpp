//main function to test BankAccount

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include "BankAccount.h"
#include "BankAccount.cpp"

int main() { 
	BankAccount bankObj(1500);//initial balance
	SavingsAccount savObj(1000, 0.04);//initial balance and interest rate
	CheckingAccount checkObj(500, 5.0);//initial balance and fee

	cout << endl << "Initial balance in Bank Account is: " << bankObj.getBalance();//display initial balances
	cout << endl << "Initial balance in Savings Account is: " << savObj.getBalance();
	cout << endl << "Intitial balance in Checking Account is: " << checkObj.getBalance();

	bankObj.debit(50);//debit from each account
	savObj.debit(100);
	checkObj.debit(100);

	cout << endl << endl << "Balances after debiting from all three accounts";
	cout << endl << "Bank Account: " << bankObj.getBalance();//display new balance
	cout << endl << "Savings Account: " << savObj.getBalance();
	cout << endl << "Checking Account: " << checkObj.getBalance();

	bankObj.credit(100);//credit each account
	savObj.credit(200);
    checkObj.credit(200);

	cout << endl << endl << "Balances after crediting all three accounts";//display new balance
	cout << endl << "Bank Account: " << bankObj.getBalance();
	cout << endl << "Savings Account: " << savObj.getBalance();
	cout << endl << "Checking Account: " << checkObj.getBalance();

	double interestAmount = savObj.calculateInterest();//credit interest
	savObj.credit(interestAmount);

	cout << endl << endl << "After cacluating and adding interest the savings account balance is: " << savObj.getBalance();

	return 0;

}