/*Create a program that computes the integer division of two integers. It should prompt the user for two integer values, 
one for the numerator and one for the denominator. Define an exception class DivByZero that has a function called Quotient. 
The function should take two integer values as input and return an integer value. For example, if the inputs are 5 and 3, it would return 1. 
However, if the second integer value (or the denominator) is 0, then it should throw a divide-by-zero exception which is caught by the main program. 
The main program should print a custom error message when this happens that says that there was an attempt to divide by zero and then it should exit normally.
*/

// Written Assignment 6 B.cpp : Main to test DivByZero header file. Requests user input of 2 integers. 
//Calls DivByZero and returns a quotient unless the denominator is zero. 
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include "DivByZero.h"
#include<iostream>
using namespace std;

int main()
{
    int numerator, denominator, quotient; //declare variables for numerator, denominator and result

    cout << "Enter the first integer" << endl;//request user input
    cin >> numerator;

    cout << "Enter the second integer" << endl;
    cin >> denominator;

    DivByZero div; //create object
    cout << div.quotient(numerator, denominator); //method call
}
