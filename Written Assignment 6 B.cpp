// Written Assignment 6 B.cpp : Main to test DivByZero header file. Requests user input of 2 integers. 
//Calls DivByZero and returns a quotient unless the denominator is zero. 
//
//Name: Aurora DiPeso
//University ID: 0663597
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
