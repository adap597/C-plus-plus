// Written Assignment 5 B.cpp 
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Driver program 

#include "Array.cpp"
#include "Array.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()

{

    //Create integer array

    Array<int> intArray(5);

    //Request integer values

    cout << "Enter 5 integer values:\n";

    cin >> intArray;

    //Print integer array

    cout << "\nPrinting Integer Array:" << endl;

    cout << intArray;



    //Create string array

    Array<string> stringArray;

    //Request string values

    cout << "\nEnter 10 string values:\n";

    cin >> stringArray;

    //Print string array

    cout << "\nPrinting String array:" << endl;

    cout << stringArray;

    return 0;

}
 
   
 
