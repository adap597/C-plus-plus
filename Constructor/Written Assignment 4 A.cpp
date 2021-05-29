/*Create a Rational Number (fractions) class like the one in Exercise 9.6 of the textbook. Provide the following capabilities:

Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies fractions (by dividing the numerator and the 
denominator by their greatest common divisor) that are not in reduced form, and avoids negative denominators.
Overload the addition, subtraction, multiplication, and division operators for this class.
Overload the relational and equality operators for this class.
Provide a function that returns the string representation of the rational number in the form a/b, 
where a is the numerator and b is the denominator.
Provide a function that returns the rational number as a double.
Also provide a main program to test your class. 
*/

//Program to test the Rational Number header file.

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
using namespace std;
#include "RationalNumber.h"

RationalNumber getRationalNumber();
//show results function prototype
void showResult(const string& oper, const RationalNumber& left, const RationalNumber& right, const RationalNumber& result);

int main() {
    RationalNumber first, second, result;//declare variables for first and second fractions and the result 
    int option;//decare variable for user input - operator option chosen

    cout << "Enter the first rational number: " << endl;//request for user input
    first = getRationalNumber();//call getRationalNumber function and assign to first variable
    cout << endl;

    cout << "Enter the second rational number: " << endl;
    second = getRationalNumber();// call getRationalNumber function and assign to second variable
    cout << endl;

    cout << "Select which operation you want to perform from the following Menu: " << endl//user selects operation
        << "1 - Addition" << endl
        << "2 - Subtraction" << endl
        << "3 - Multiplication" << endl
        << "4 - Division" << endl
        << "5 - Simplify the first fraction" << endl;
    cin >> option;
    cout << endl;

    if (option == 1) {//if else statements to calculate and display results
        result = first + second;
        showResult("+", first, second, result);
    }
    else if (option == 2) {
        result = first - second;
        showResult("-", first, second, result);
    }
    else if (option == 3) {
        result = first * second;
        showResult("*", first, second, result);
    }
    else if (option == 4) {
        result = first / second;
        showResult("/", first, second, result);
    }
    else if (option == 5) {
        first.simplify();//calls simplify function
        first.display();
    }
    else {
        cout << "Invalid Entry";
    }
    cout << endl;

    return 0;
}

RationalNumber getRationalNumber() {//getRationalNumber function
    int numer, denom;//declare 2 int variables for numerator and denominator

        cout << "Enter the numerator: " << endl;
        cin >> numer;
        if (numer < 0) {//test if numerator is negative
            cout << "Error. Use only positive integers. Please enter a new value: \n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> numer;
        }
        else {
            cout << "You entered: " << numer << endl;
        }

        cout << "Enter the denominator: " << endl;
        cin >> denom;
        if ((denom == 0) && (denom < 0)) {//test if denominator is zero or negative
            cout << "Error. The denominator cannot be zero or negative. Please enter a new value: \n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> denom; 
        }
        else {
            cout << "You entered: " << denom << endl;
        }
        return RationalNumber(numer, denom);

}
//showResult function
void showResult(const string& oper, const RationalNumber& left, const RationalNumber& right, const RationalNumber& result) {
    cout << "(";//display fractions in this format (x/y) with the operator in between (x/y) + (a/b) = result
    left.display();
    cout << ") " << oper << " (";
    right.display();
    cout << ") = (";
    result.display();
    cout << ")";
}
