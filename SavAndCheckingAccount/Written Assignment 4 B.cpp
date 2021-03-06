/*Create an inheritance hierarchy that a bank might use to represent customers’ bank accounts. 
All customers at this bank can deposit (i.e., credit) money into their accounts and withdraw (i.e., debit) money from their accounts. 
More specific types of accounts also exist. Savings accounts, for instance, earn interest on the money they hold. 
Checking accounts, on the other hand, charge a fee per transaction (i.e., credit or debit).

Create an inheritance hierarchy containing base-class Bank-Account and derived classes Savings and Checking that inherit from class Bank-Account.
Base-class Bank-Account should include one data member of type double to represent the bank account’s balance. 
The class should provide a constructor that receives an initial balance and uses it to initialize the data member. 
The constructor should validate the initial balance to ensure that it’s greater than or equal to 0.0. 
If not, the balance should be set to 0.0 and the constructor should display an error message, indicating that the initial balance was invalid. 
The class should provide three member functions. Member function credit should add an amount to the current balance. 
Member function debit should withdraw money from the Bank-Account and ensure that the debit amount does not exceed the Bank-Account’s balance. 
If it does, the balance should be left unchanged and the function should print the message “The balance is less than the debit amount.” 
Member function getBalance should return the current balance.

Derived class Savings should inherit the functionality of a Bank-Account, but also include a data member of type double indicating the 
interest rate (percentage) assigned to the Bank-Account. Savings’ constructor should receive the initial balance, 
as well as an initial value for the Savings’ interest rate. Savings should provide a public member function 
calculateInterest that returns a double indicating the amount of interest earned by an account. 
Member function calculateInterest should determine this amount by multiplying the interest rate by the bank account balance. 
[Note: Savings should inherit member functions credit and debit as is without redefining them.]

Derived-class Checking should inherit from base-class Bank-Account and include an additional data member of type double that represents 
the fee charged per transaction. Checking’s constructor should receive the initial balance, as well as a parameter indicating a fee amount. 
Class Checking should redefine member functions credit and debit so that they subtract the fee from the account balance whenever 
either transaction is performed successfully. Checking’s version of these functions should invoke the base-class Bank-Account to 
perform the updates to an account balance. Checking’s debit function should charge a fee only 
if money is actually withdrawn (i.e., the debit amount does not exceed the account balance). 
[Hint: Define Bank-Account’s debit function so that it returns a bool (Boolean) indicating whether money was withdrawn. 
Then use the return value to determine whether a fee should be charged.]

After defining the classes in this hierarchy, write a program that:

Creates an object of Bank-Account, Savings, and Checking class. 
Each of the three objects should have an initial balance. 
The Savings object should also have an interest rate and the Checking object should also have a transaction fee.
Prints out the balance of all the three objects.
Debits a certain amount from all the three objects.
Prints out the balance of all the three objects (after the debits) in the previous step.
Credits a certain amount to all the three objects.
Prints out the balance of all the three objects (after the credits) in the previous step.
Computes the interest for the Savings object and adds it to its balance, then prints out the new balance.
*/

//main function to test BankAccount

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
