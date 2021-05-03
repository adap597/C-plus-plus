/*Create a program to determine the largest and smallest number out of 15 numbers entered (numbers entered one at a time). 
This should be done in a function using this prototype:

double larger (double x, double y);

Make sure you use a for loop expression inside your function.

Enter 15 numbers
11 67 99 2 2 6 8 9 25 67 7 55 27 1 1
The largest number is 99

Hints:

Read the first number of the data set. Because this is the only number read to this point, you may assume that it is the largest number so far and call it max.
Read the second number and call it num. Now compare max and num, and store the larger number into max. Now max contains the larger of the first two numbers.
Read the third number. Compare it with max and store the larger number into max.
At this point, max contains the largest of the first three numbers. Read the next number, compare it with max, and store the larger into max.
Repeat this process for each remaining number in the data set using a for expression
*/

// Assignment 1.cpp : This program accepts user input of 15 integers and returns the largest integer entered. 
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
	
