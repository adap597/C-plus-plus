//Written Assignment 6 A
//This program reads an input file, counts the number of characters and lines, then displays the results in the output file. 

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char s[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";   //array of characters
    int i, count[30], lines = 0;       // variable for counting characters and lines; lines initialized to zero
    char infilen[25], ofilen[25];   // two char arrays for input and output file names
    for (i = 0; i < 30; i++)   //initialize count variable to zero
        count[i] = 0;
    cout << "Enter Input file name: "; //request for input file name
    cin >> infilen;                  
    cout << "Enter Output file name: ";//request for output file name
    cin >> ofilen;                   
    ifstream in(infilen); //ifstream constructor opens input file
    ofstream off(ofilen); //ifstream constructor opens output file
    char ch;
    if (!in)
    {
        cout << "Error in opening Input file" << endl; //display error if the input file could not be opened. 
        return 0;
    }

    while (!in.eof())       //loop until the end of file character
    {
        in.get(ch);       //read character from input file
        cout << ch;
        off.put(ch);       //write character into output file
        if (ch == '\n') //if character is a new line character increment the line count
            lines++;
        for (i = 0; s[i] != '\0'; i++) //loop and increment character count until end of file character
            if (ch == s[i] || ch == s[i] + 32)
                count[i]++; 
    }
    off << "\nTotal number of lines: " << lines;//display total number of lines
    for (i = 0; s[i] != '\0'; i++)
    {
        if (count[i] != 0)
        {
            off << "\n" << s[i] << " appears " << count[i] << " times"; //display occurrences of each letter
        }

    }
    in.close();           // closing input file
    off.close();           // closing output file
    return 0;
}
