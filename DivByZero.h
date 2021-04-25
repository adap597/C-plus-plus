//Exception class DivByZero
//will throw error if the denominator is zero 
//and divide the two integers if the denominator is not zero, returning the quotient

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#ifndef DIVBYZERO_H
#define DIVBYZERO_H

#include<iostream>
using namespace std;

class DivByZero {//exception class
public:
    int quotient(int a, int b) {
        int c;
        try {//try block
            if (b == 0) {
                throw "Error";
            }
        }
        catch (...) {//exception handler
            cout << "Denominator Cannot be Zero!";
        }
        return (a / b);//divide numerator and denominator
    }

};

#endif