/*Write a program using a function and a series of if…else statements. 
The user should be prompted to enter a whole number in main in the range 1–5. 
The function is called and the number entered is passed to the function. 
This function parameter will then be used in a series of if…else statements to discover and print 
out the number word within the function (for example, 1=one, 2=two, 3=three, etc.).

Enter a number in the range 1–5: 1
You entered the number one.
*/

// Assignment 1 B.cpp : This program accepts user input of an integer between 1 and 5, then
//prints out the number word. It also displays an error message if the input is not within specified parameters.
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
using namespace std;

int main()
{
	int wholenum;
	cout << "Enter a whole number between 1 and 5: \n";
	cin >> wholenum;

	if (wholenum == 1){
		cout << "You entered the number one.";
	}
	else if (wholenum == 2) {
		cout << "You entered the number two.";
	}
	else if (wholenum == 3) {
		cout << "You entered the number three.";
	}
	else if (wholenum == 4) {
		cout << "You entered the number four.";
	}
	else if (wholenum == 5) {
		cout << "You entered the number five.";
	}
	else {
		cout << "Invalid entry. Please enter a whole number between 1 and 5.";
	}
}



						
