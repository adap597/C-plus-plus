// Final Problem 2.cpp : 
////Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//main method to test Alarm Clock 

#include<iostream> 
#include "Clock.h"

using namespace std;

int main()
{
    Clock clock(11, 59, 55, 'A');//sets time to 11:59:55 AM
    cout << "Present Time: ";
    clock.printTime();//calls print time
    cout << endl;

    clock.setAlarm(12, 00, 00, 'P');//sets alarm to 12 PM
    while (true)
    {
        if (clock.isAlarmTime())//calls isAlarmTime function
        {
            cout << "Alarm...WAKE UP" << endl; //display Wake up message if alarm is reached
            break;//break out of while loop once alarm goes off
        }
        clock.incrSecond(); //display next seconds if alarm has not been reached
        cout << "Next Second: ";
        clock.printTime();//print current time after each second 
    }
    cout << endl;
    return 0;
}
