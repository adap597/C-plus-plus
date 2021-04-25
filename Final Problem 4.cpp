// Final Problem 4.cpp : This program accepts user input of integers (2 int and 2 long). The values
//of each int and each long are interchanged. The results are output to a txt file. The content
//of the text file is displayed in the console for verification purposes. 
//
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include<iostream>
#include <fstream>
using namespace std;

template <class T> //create template to change the values of 2 ints
void swapnow(T& a, T& b) //uses reference parameters
{
	T c(a); a = b; b = c;
}

int main()
{
	ofstream outputFile;
	outputFile.open("Output4.txt");//open output file

	int a, b; //declare 2 variables for int input
	cout << "Enter an integer: " << endl; //request user input
	cin >> a;
	outputFile << "a is " << a << endl; //write to output file

	cout << "Enter another integer: " << endl;
	cin >> b;
	outputFile << "b is " << b << endl;

	cout << "Swap function is called\n" << endl;
	swapnow(a, b);//call swap function to interchange values
	outputFile << "Swap! a is now " << a << endl; //write to output file
	outputFile << "Swap! b is now " << b << endl;

	long c, d; //declare 2 variables for long ints
	cout << "Enter an integer of type long: " << endl;//request user input
	cin >> c;
	outputFile << "c is " << c << endl;//write to output file

	cout << "Enter another integer of type long: " << endl;
	cin >> d;
	outputFile << "d is " << d << endl;

	cout << "Swap function is called\n" << endl;
	swapnow(c, d); //call swap function
	outputFile << "Swap! c is now " << c << endl; //write to output file
	outputFile << "Swap! d is now " << d << endl;

	ifstream f("Output4.txt"); //dispay output file content in console window
	if (f.is_open())
		cout << "Output file data: \n" << f.rdbuf() << "\n" << endl;
}

