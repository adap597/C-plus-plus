// Assignment 1.cpp : This program accepts user input of 15 integers and returns the largest integer entered. 
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>

using namespace std;

double larger(double x, double y);//function prototype
int main()
{
	cout << "Enter 15 numbers " << endl;
	double num;
	double max;
	cin >> max;//stores the first integer entered in max
	for (int i = 0; i < 14; i++)//loop continues until 15 integers have been entered
	{
		cin >> num; //stores next integer in num calls function to compare num and max, storing the larger in max
		max = larger(max, num); 
	}
	cout << "The largest number is " << max << endl;
	return 0;
}


double larger(double x, double y)
{
if (x > y)
		return x;
	else
		return y;
}
	
