// Assignment 2 A.cpp : A program that accepts user input into 2 arrays. It then adds the value of each array element
//from array 1 and array 2 and stores the sum in the third array. It then displays a table with the values of each element
//from each array and the sums. 

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void add(int [], int [], int []); // function prototype

int main()
{
	int first_array[20]; // declare the arrays
	int second_array[20];
	int third_array [20];

	//Request for user input 
	cout << "\n Enter 20 integers into the first array (press Enter key after each entry): " << endl;
	for (int i = 0; i < 20; i++) { //for loop "loops" for each element in the array
		cin >> first_array[i]; // stores the values in the first array

	}//prompts for user input to fill the second array
	cout << "\n Enter 20 integers into the first array (press Enter key after each entry): " << endl;
	for (int i = 0; i < 20; i++) {
		cin >> second_array[i];
	}
	add(first_array, second_array, third_array); //calls the add function

}

void add(int first_array[], int second_array[], int third_array[])//adds each element from the arrays and displays the values and sums
{
	cout << setw(7) << "Array 1" << setw(3) << "+" << setw(10) << "Array 2" << setw(3) << "=" << setw(10) << "Array 3" << endl;
	for (int i = 0; i < 20; i++) {// for loop "loops" for each element in the arrays
		third_array[i] = first_array[i] + second_array[i];

		cout << setw(7) << first_array[i] << setw(3) << "+" << setw(10) << second_array[i] << //display table
			setw(3) << "=" << setw(10) << third_array[i] << endl;
	}

}

