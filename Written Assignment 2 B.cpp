/* Written Assignment 2 B.cpp : This program accepts user input of a numerical grade between 0 and 100, then displays
* the letter grade. There is some user input validation to check if the number entered is in range and if a character
* or symbol was entered. However, there is a bug in the switch statement. The initial error checking in the if statement 
* will catch any numbers out of range, symbols, or characters. After the first error message, if the user enters a number from -1 to -9 
* it validates and displays F grade. If the user enters 101 to 109, it validates to an A grade. If the user enters a symbol or 
* character, it validates to 0 and F grade.
*/

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <iomanip>

using namespace std; 

void getScore(int& score) {
	cout << "Enter the numerical grade in the range of 0-100: \n";// request for user input
	cin >> score;//integer is stored in score variable
		
	if (cin.fail()) {//Error if a character or symbol is entered.
		cout << "Input error. Please enter only integers. Enter a grade between 0 and 100: " << endl;
		cin.clear();//clears prior input
		cin.ignore(256, '\n');//ingores the last 256 characters until the newline character
		cin >> score;

	}
	else if (score < 0 || score > 100) {//data validation checks if the score is less than zero or greater than 100
		cout << "Invalid Input. Please enter a numerical grade in the range of 0-100: \n"; //Displays an error if outside parameters
		cin >> score;
	}
	else{
		cout << "You entered: " << score << endl;
		}			
}

void printGrade(int score) {// function to calculate the letter grade based on numerical input
	switch (score / 10) {// user input divided by 10
	case 9://grade is between 90 and 100
	case 10:
		cout << "A grade";
		break;
	case 8://grade is between 80 and 89
		cout << "B grade";
		break;
	case 7://grade is between 70 and 79
		cout << "C grade";
		break;
	case 6://grade is between 60 and 69
		cout << "D grade";
		break;
	case 5://grade is between 50 and 59
	case 4://grade is between 40 and 49
	case 3://grade is between 30 and 39
	case 2://grade is between 20 and 29
	case 1://grade is between 10 and 19
	case 0://grade is between 0 and 9
		cout << "F grade";
		break;
	default:
		cout << "Error. Please enter a numerical grade between 0 and 100. \n";
		break;
	}
}

int main()
{
	int score;
	getScore(score);// calls getScore function
	printGrade(score);// calls printGrade function

}

