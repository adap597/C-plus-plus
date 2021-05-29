// Final Problem 3.cpp : This program reads data from a file, counts the number of characters in each word
//then writes the character counts to an output file. The contents of the input and output file are displayed in the console to 
//verify the program worked properly without having to open the txt files.

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	ifstream file;
	ofstream out;
	file.open("input.txt"); //open input file
	out.open("output.txt"); //open output file

	if (!file) {
		cerr << "Input file could not be opened or file does not exist" << endl;//display error if input file cannot be opened
		exit(1);
	}

	while (!file.eof())//while not at end of file character
	{
		string a;
		getline(file, a); //read the file
		a += " "; 
		int j = 0;
		for (int i = 0; i < a.length(); i++) //loop through until end of file character
		{
			if (a[i] != ' ')//if not an empty space increment counter
			{
				j++;
			}
			else
			{
				out << j; 
				if (i != a.length()) out << " ";
				j = 0;
			}
		}
		out << endl;
	}
	ifstream s("input.txt"); //if file is open display contents
	if (s.is_open())
		cout << "Input file data: " << s.rdbuf() << "\n" << endl;
		

	ifstream f("output.txt");
	if (f.is_open())
		cout << "Output file data: " << f.rdbuf() << "\n" << endl;
}
	
