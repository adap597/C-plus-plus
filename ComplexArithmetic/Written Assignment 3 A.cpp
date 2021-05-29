/*Create a class called Complex for performing arithmetic with complex numbers. Complex numbers have the form:

realPart + imaginaryPart * i

where i is

√-1

Use double variables to represent the private data of the class. 
Provide a constructor that enables an object of this class to be initialized when it’s declared. 
The constructor should contain default values of (1,1) i.e. 1 for the real part and 1 for the imaginary part. 
Provide public member functions that perform the following tasks:

(a) add – Adds two Complex numbers: The real parts are added together and the imaginary parts are added together.
(b) subtract – Subtracts two Complex numbers. 
The real part of the right operand is subtracted from the real part of the left operand, and the 
imaginary part of the right operand is subtracted from the imaginary part of the left operand.
(c) toString – Returns a string representation of a Complex number in the form (a,b), where a is the real part and b is the imaginary part.

Write a main program to test your class. Your program should prompt the user to enter two Complex numbers. 
If the user hits enter without entering anything, then the default value of (1,1) used by the default constructor should be used. 
It should then print out the sum and difference of the two Complex numbers entered. The following is a sample run:

Enter a Complex number with the real and imaginary parts separated by a comma: 4,5
Enter a Complex number with the real and imaginary parts separated by a comma: 3,2

The sum of the two complex numbers is (7,7) and the difference is (1,3).

Another sample run would be:

Enter a complex number with the real and imaginary parts separated by a comma:
Enter a complex number with the real and imaginary parts separated by a comma: 3,2

The sum of the two Complex numbers is (4,3) and the difference is (-2,-1).
*/

// Written Assignment 3 A.cpp : This program tests the Complex header file. It requests user input of two complex numbers
//and displays the result after the complex numbers have been added and subtracted.


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
