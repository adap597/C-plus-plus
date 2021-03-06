/*Create a SavingsAccount class. Use a static data member annualInterestRate to store the annual interest rate for each of the savers. 
Each member of the class contains a private data member savingsBalance indicating the amount the saver currently has on deposit. 
Provide member function calculateMonthlyInterest that calculates the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12; 
this interest should be added to savingsBalance. Provide a static member function modifyInterestRate that sets the static annualInterestRate to a new value.

Write a main program to test your class. Your program should prompt the user to enter the savingsBalance for two different accounts. 
It should ask for the annualInterestRate.  It should then compute and print the new balance for both the accounts. A sample run would be:

Please enter the savings balance of account 1: 2000
Please enter the savings balance of account 2: 3000

Please enter the annual interest rate: 3

The interest for account 1 would be $5.00 and the balance after one month would be $2005.00
The interest for account 2 would be $7.50 and the balance after one month would be $3007.50

Would you like to change the interest rate? (Y or N): Y

Please enter the annual interest rate: 6

The interest for account 1 would be $10.00 and the balance after one month would be $2010.00
The interest for account 2 would be $15.00 and the balance after one month would be $3015.00

Would you like to change the interest rate? (Y or N): N

Goodbye!
*/

/*Written Assignment 3 B.cpp : Test the SavingsAccount Header file. Accepts user input of current savings account balances and current Annual interest rate.
*Calculates monthly interest rate.
*Calculates total interest to be applied after 1 month
*Displays total interest after one month
*Adds interest to initial balance and displays the total
*Gives user the option to change the interest rate, and runs new calculations based on the new rate
*/

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN


#include <iostream>
#include <string>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

int SavingsAccount::annualInterestRate;

//Function definitions
void SavingsAccount::initialAccountBalance()
{
    cout << "Enter the current balance of the first savings account:";//Request for user input
    cin >> saverOne;//stores input in variables for the initial account balances
    cout << "Enter the current balance of the second savings account:";
    cin >> saverTwo;
}
void SavingsAccount::initialIntRate()
{
    cout << "Please enter the annual interest rate for both accounts:"; // request for user input for interest rate
    cin >> annualInterestRate;//stores in Annual Interest Rate variable
}

void SavingsAccount::calcMonthlyInterest()//function to calculate monthly interest
{
    temp1 = saverOne; //assigns value in saverOne to temp1
    temp2 = saverTwo; //assigns value in saverTwo to temp2
    tempAcct1 = temp1; //assigns value in temp1 to tempAcct1
    tempAcct2 = temp2; //assigns value in temp2 to tempAcct2
    tempAcct1 = ((saverOne / 100) * annualInterestRate) / 12; //initial account balance divided by 100, then multiplied by AIR,
    tempAcct2 = ((saverTwo / 100) * annualInterestRate) / 12; //then divided by 12 gives the monthly interest
    totalBal1 = temp1 + tempAcct1; //initial account balance + monthly interest is assigned to totalBal1 variable
    totalBal2 = temp2 + tempAcct2;

}
void SavingsAccount::calcTotalInt() //calculates total account balance after 1 month of interest is applied
{
    tempAcct1 = ((saverOne / 100) * annualInterestRate) / 12;
    tempAcct2 = ((saverTwo / 100) * annualInterestRate) / 12;
    totalBal1 = temp1 + tempAcct1;
    totalBal2 = temp2 + tempAcct2;
}
void SavingsAccount::displayAccount()//function to display account information
{
    cout << setprecision(2) << fixed;
    cout << "\nThe interest for the first savings account is $" << tempAcct1 << "\n" << "The balance after one month would be $" << totalBal1 << endl;
    cout << "\nThe interest for the second savings account is $" << tempAcct2 << "\n" << " The balance after one month would be $" << totalBal2 << endl << endl;
}
int main()
{
    char choice; //char variable to store user input to change interest rate

    SavingsAccount sa; //object for SavingsAccount class

    sa.initialAccountBalance();
    sa.initialIntRate();
    sa.calcMonthlyInterest();
    sa.displayAccount();

    do {
        cout << "\nWould you like to change the interest rate? (Y or N):";//user prompt
        cin >> choice;
        if (choice == 'N' || choice == 'n')//If user enters N or n program exits - displays goodbye message
            break;
        cout << endl;
        sa.initialIntRate();
        sa.calcTotalInt();
        sa.displayAccount();
    } while (choice == 'Y' || choice == 'y'); //If user enters Y or y, they can enter a new interest rate
    //functions will execute again to calculate based on the new interest rate

    cout << "\n\nGoodbye!\n\n";

    return 0;
}
