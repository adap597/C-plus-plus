//Used in Final Problem 2
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Alarm Clock function definitions

#include "Clock.h"
#include <iostream>
using namespace std;


Clock::Clock()//default constructor sets time to 12 AM and alarm off
{
    hours = 12;
    minutes = 0;
    seconds = 0;
    am_pm = 'A';
    alarm = false;
}
Clock::Clock(int h, int m, int s, char a_p)//constructor for clock that takes parameters for hours, min, sec, AM/PM
{
    hours = h;
    minutes = m;
    seconds = s;
    am_pm = a_p;
    alarm = false;
}
void Clock::incrSecond()//function to increment seconds and change from AM/PM
{
    seconds++;
    if (seconds == 60)//if seconds = 60 increment minutes counter
    {
        minutes++;
        seconds = 0;
        if (minutes == 60)//if minutes = 60 increment hours counter
        {
            hours++;
            minutes = 0;

            if (hours == 12)//if hours = 12 change from AM to PM or PM to AM
            {
                if (am_pm == 'A' || am_pm == 'a')
                    am_pm = 'P';
                else
                    am_pm = 'A';
            }
            if (hours == 13)//if hours increments to 13 set variable to 1
                hours = 1;
        }
    }
}
void Clock::setAlarm(int h, int m, int s, char a_p)//set alarm function 
{
    alarmTime = new Clock(h, m, s, 'P');
    alarm = true;
}
bool Clock::isAlarmTime()//function to determine if the alarm should go off
{
    if (alarm == true && hours == alarmTime->hours && minutes == alarmTime->minutes && seconds == alarmTime->seconds && am_pm == alarmTime->am_pm)
    {
        alarm = false;
        return true;
    }
    return false;
}
void Clock::printTime()//function to print the current time
{
    if (hours < 10)
        cout << "0";
    cout << hours << ":";
    if (minutes < 10)
        cout << "0";
    cout << minutes << ":";
    if (seconds < 10)
        cout << "0";
    cout << seconds << " ";
    if (am_pm == 'A' || am_pm == 'a')
        cout << "AM" << endl;
    else
        cout << "PM" << endl;
}
