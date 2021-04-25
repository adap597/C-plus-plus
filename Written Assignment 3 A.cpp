// Written Assignment 3 A.cpp : This program tests the Complex header file. It requests user input of two complex numbers
//and displays the result after the complex numbers have been added and subtracted.

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN


#include <iostream>
#include <string>
#include<sstream>
#include "Complex.h"

using namespace std;

int main()
{
    double real, imag;// declare variables for numbers input
    char comma;//declare variable for the comma character

    cout << "Enter a Complex number with the real and imaginary parts separated by a comma: \n";//Request for user input
    cin >> real >> comma >> imag;

    Complex c1(real, imag); //first complex number stored in c1 object

    cout << "Enter a Complex number with the real and imaginary parts separated by a comma: \n";//Request for user input
    cin >> real >> comma >> imag;


    Complex c2(real, imag);// second complex number stored in c2 object


    Complex add = c1.add(c2);//call add function

    Complex subtract = c1.subtract(c2);//call subtract function

    cout << "The sum of the two complex numbers is " << add.toString()//display results
        << " and the difference is " << subtract.toString() << endl;

    return 0;
}
