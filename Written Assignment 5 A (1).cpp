/*Develop a polymorphic banking program using the Bank-Account hierarchy created in Exercise 2 of Written Assignment 4. 
For each account in the vector, allow the user to specify an amount of money to withdraw from the Bank-Account using member
function debit and an amount of money to deposit into the Bank-Account using member function credit. As you process each Bank-Account, 
determine its type. If a Bank-Account is a Savings, calculate the amount of interest owed to the Bank-Account using member function calculateInterest, 
then add the interest to the account balance using member function credit. 
After processing an account, print the updated account balance obtained by invoking base-class member function getBalance.
*/

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//main function to test Class
#include <iostream>
#include <vector>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include"Account.h"

using namespace std;

int main() {

	const int SIZE = 4;// create 4 accounts

	vector<Account*>account(SIZE);

	double interest;

	double withdraw;

	double deposit;

	account[0] = new SavingsAccount(5000, 0.05);//establish initial balance and interest rate

	account[1] = new CheckingAccount(5000, 0.07);//establish initial balance and fee amount

	account[2] = new SavingsAccount(3000, 0.04); //establish initial balance and interest rate

	account[3] = new CheckingAccount(0.0, 0.01); //establish initial balance and fee amount

	for (int i = 0; i < SIZE; i++) {
		//displays initial balance and account number
		cout << "Processing Account number " << (i + 1) << " balance: $" << account[i]->getBalance() << endl;

		// request for debit amount
		cout << "Enter amount to be debited: ";
		cin >> withdraw;
		account[i]->debit(withdraw);

		// request for credit amount
		cout << "Enter amount to be credited: ";
		cin >> deposit;
		account[i]->credit(deposit);

		// determine type of account

		SavingsAccount* sav = dynamic_cast<SavingsAccount*>(account[i]);

		if (sav != NULL) {

			cout << "Account is a savings account." << endl; //if savings, calls calculate interest

			interest = sav->calculateInterest();

			cout << "Interest owed: " << interest << endl;

			sav->credit(interest);

		}
		else {

			cout << "Account " << (i + 1) << " is a checking account." << endl; // else checking account

		}

		cout << "Final balance: " << account[i]->getBalance() << endl; //display final balance

		cout << endl;

	}

	// deleting the objects

	for (int i = 0; i < SIZE; i++)

		delete account[i];

	return 0;

}
