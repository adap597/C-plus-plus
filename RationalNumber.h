//Used in Assignment 4 A
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Rational Number class definition. Allows user to input 2 fractions and add, subtract, multiply, divide and simplify.

#include<iostream>
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
using namespace std;

class RationalNumber
{
private:
    int numerator; //declare private data members
    int denominator;
public:
    RationalNumber() { //declare public data members
        numerator = 0;//default values
        denominator = 1;
   }
    RationalNumber(int numer) {
        numerator = numer;
        denominator = 1;
    }
    RationalNumber(int numer, int denom) {
        numerator = numer;
        if (denom > 0) {
            denominator = denom;
        }
    }
    const RationalNumber operator+(const RationalNumber& other) const {//overloaded addition operator
        int numer = (numerator * other.denominator + denominator * other.numerator);
        int denom = (denominator * other.denominator);

        RationalNumber temporary(numer, denom);

        return temporary;
    }
    const RationalNumber operator-(const RationalNumber& other) const {//overloaded subtraction operator
        int numer = (numerator * other.denominator - denominator * other.numerator);
        int denom = (denominator * other.denominator);

        RationalNumber temporary(numer, denom);

        return temporary;
    }
    const RationalNumber operator*(const RationalNumber& other) const {//overloaded multiplication operator
        int numer = (numerator * other.numerator);
        int denom = (denominator * other.denominator);

        RationalNumber temporary(numer, denom);

        return temporary;
    }
    const RationalNumber operator/(const RationalNumber& other) const {//overloaded division operator
        int numer = (numerator * other.denominator);
        int denom = (denominator * other.numerator);

        RationalNumber temporary(numer, denom);

        return temporary;
    }
    void display() const {//display function - format fraction x/y
        cout << numerator << "/" << denominator;
    }
    string toString() {
        return numerator + "/" + denominator;
    }
    double toDouble() {//return rational number as a double
        return (double)(numerator / denominator);
    }

    void simplify() {//simplify function
        int i = gcd(numerator, denominator);//assign greatest common divisor to int i
        numerator = numerator / i;
        denominator = denominator / i;
    }

    bool operator==(RationalNumber& other) {
        if (toDouble() == other.toDouble()) {
            return true;
        }

        return false;
    }
    bool operator>(RationalNumber& other) {
        if (toDouble() > other.toDouble()) {
            return true;
        }

        return false;
    }
    bool operator<(RationalNumber& other) {
        if (toDouble() < other.toDouble()) {
            return true;
        }

        return false;
    }
private:
    int gcd(int a, int b) {//find the greatest common divisor
        int i, j;

        i = a;
        j = b;

        while (i != j)
        {
            if (i > j)
                i = i - j;
            else
                j = j - i;
        }

        return i;
    }
};

#endif
