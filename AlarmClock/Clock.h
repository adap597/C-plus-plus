//Used in Final Problem 2
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//Clock header file

#ifndef CLOCK_H
#define CLOCK_H

class Clock
{//public data members for clock, incrementing seconds, print time, set alarm, and if time set for alarm is reached
public:
	Clock();
	Clock(int h, int m, int s, char a_p);
	void incrSecond();
	void printTime();
	void setAlarm(int h, int m, int s, char a_p);
	bool isAlarmTime();
private://private data members for hourse, min, seconds, AM/PM and alarm
	int hours;
	int minutes;
	int seconds;
	char am_pm;
	Clock* alarmTime;
	bool alarm;
};

#endif
