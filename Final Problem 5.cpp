// Final Problem 5.cpp : main to test base class square and derived class cube
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include<iostream>
#include "square.h"
#include "cube.h"

using namespace std;

int main()
{
    square s;//create object square s
    cout << "1) Object square s is created in main." << endl;
    cout << "2) The main function calls the calcVal function from the base class square." << endl;;
    cout << "2a) The calcVal function requests user input for the length of side." << endl;
    cout << "2b) The function multiplies the length of side by itself to find area (side*side)." << endl;
    cout << "3) The area of the square is displayed." << endl;
    cout << "Area is: " << s.calcVal() << "\n" << endl;//calls square calcVal function and calculates area

    cube c;//create object cube c
    cout << "4) Object cube c is created in main." << endl;
    cout << "5) The main function calls the calcVal function from the derived class cube." << endl;
    cout << "6) The calcVal function in the cube derived class must call the calcVal function from the square base class." << endl;
    cout << "6a) When the calcVal function is called from base class square, it requests user input for the side length." << endl;
    cout << "6b) Area is first calculated then multiplied by length of the side to find volume (side*area)." << endl;
    cout << "7) The volume is displayed." << endl;;
    cout << "Volume is: " << c.calcVal() << "\n" << endl;//calls cube calcVal function and calculates volume 
    return 0;
}
