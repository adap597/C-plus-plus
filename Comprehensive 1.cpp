/*You have 10 lowercase letters that you would like to arrange in alphabetical order. 
Create a program to determine the first letter in alphabetical order out of the 10 letters entered. 
(Please have your program enter the 10 letters one at a time.) This should be done in a function using this prototype:

char firstletter (char x, char y);

Make sure you use a for loop expression inside your function. (Hint: you can order letters using ASCII code, for example, a < c.)               

Output should display the appropriate letter, as well as the associated ASCII code.
*/

// Comprehensive 1.cpp : This program accepts user input of 10 lowercase letters. It then determines
//the first letter in alphabetical order that was entered and displays the letter and its ASCII value 
//in the console. If the user inputs a symbol or number, depending on the ASCII value of the input, the symbol
//or number will be displayed as the first "letter". A future improvement to the program could validate if the 
//user entered an alphabetic character. 

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN


#include <iostream>
using namespace std;

char firstletter(char x, char y);// function prototype

    int main()
    {
        char letters[10];//declare an array "letters" 
        cout << "Enter 10 lowercase letters, one at a time. " << endl;//Request for user input
        for (int i = 0; i < 10; i++)//for loop "loops" until the user has entered the last letter
        {
            char temp;//declare a temp variable 
            cout << "Letter number " << i + 1 << ": " << flush;
            cin >> temp; ;//store input in temp variable
            letters[i] = temp; //assign temp to each element in letters array as for loop completes a loop
        }
        char first = letters[0];
        for (int i = 1; i < 10; i++)//for loop to compare each letter
        {
            //compares the value of each letter and assigns the letter with the 
            //smallest ASCII value in "first"
            first = firstletter(first, letters[i]);     
        }
        cout << "The first letter is: " << first << endl;//display the first letter
        cout << "The ASCII value of " << first << " is: " << int(first);//display the letters ASCII value by casting char as int
        return 0;
    }
    char firstletter(char x, char y)//call the function
    {
        return (x > y) ? y : x;//uses conditional operator ?:
        //if x is greater than y is true, then return y otherwise return x

    }




