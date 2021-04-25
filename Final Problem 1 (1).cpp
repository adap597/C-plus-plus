// Final Problem 1.cpp : This program is a race between the tortoise and the hare. The program moves each
//contender by generating a random number and moving forward or backward based on if else statements.
//The first contender to reach the finish line (a variable = to 70) is the winner. As each contender moves
//a variable is incremented to keep track of their progress. The program uses pointers to access each variable.
//It also prints each contenders current position in the console window.
//
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>

using namespace std;

//function prototypes for Hare and Tortoise movement and printing current position of race contenders
void moveHare(int* harePtr, const int FINISH);//declares pointer variables and constant int variable for finish line
void moveTortoise(int* tortoisePtr, const int FINISH);
void printPosition(const int* reptilePtr, const int* mammalPtr, const int FINISH);

int main() {

    const int FINISH = 70; //initialize constant variable for finish
    int timer = 0;//initialize timer to zero
    int hare = 1;//initialize hare and tortoise to one
    int tortoise = 1;

    cout << "Good afternoon Ladies and Gents, Mammals and Reptiles!\n Place your bets!";//opening text for beginning of race
    cout << "\nIt's the race between the Tortiose and the Hare!\n Bang !!!";
    cout << "\nAnd they're off!\n";

    srand(time(NULL));

    while (tortoise != FINISH && hare != FINISH) {//while either contender has not reached the finish line

        moveTortoise(&tortoise, FINISH);//call move Tortoise
        moveHare(&hare, FINISH);//call move Hare
        printPosition(&tortoise, &hare, FINISH);//print current position
        timer++;//increment timer variable
    }
    //determine the winner
    if (&tortoise >= &hare)
        cout << "Tortoise Wins!" << endl;
    else
        cout << "Hare Wins!" << endl;

    return 0;
}
void moveTortoise(int* tortoisePtr, const int FINISH)//moveTortoise function
{
    int tranNum;//generate random number
    tranNum = (rand() % 10) + 1;

    if (tranNum >= 1 && tranNum <= 5)//Fast Plod
        *tortoisePtr += 3;
    else if (tranNum == 6 || tranNum == 7)//Slip
        *tortoisePtr -= 6;
    else
        *tortoisePtr += 1;//Slow Plod

    if (*tortoisePtr < 1)//if value goes below 1 set it back = to 1
        *tortoisePtr = 1;
    else if (*tortoisePtr > FINISH)//if value is above 70, set it equal to 70/FINISH
        *tortoisePtr = FINISH;
}

void moveHare(int* harePtr, const int FINISH)//move Hare function
{
    int hrandNum;//generate random number
    hrandNum = (rand() % 10) + 1;

    if (hrandNum == 3 || hrandNum == 4)//Big Hop
        *harePtr += 9;
    else if (hrandNum >= 6 && hrandNum <= 8)//Small Hop
        *harePtr += 1;
    else if (hrandNum > 8)//Small slip
        *harePtr -= 2;
    else if (hrandNum == 1 || hrandNum == 2)//Big Slip
        *harePtr -= 12;
    else if (hrandNum == 5)//Sleep
        *harePtr += 0;

    if (*harePtr < 1)//if value goes below 1 set it back = to 1
        *harePtr = 1;
    else if (*harePtr > FINISH)//if value is above 70, set it equal to 70/FINISH
        *harePtr = FINISH;
    cout << endl;
}
void printPosition(const int* reptilePtr, const int* mammalPtr, const int FINISH)//print current position function
    {
        if (*reptilePtr == *mammalPtr)//if turtle and hare are equal, print bump
            cout << setw(*mammalPtr) << "BUMP!";
        else if (*reptilePtr < *mammalPtr)
        {
            cout << setw(*mammalPtr) << 'H';//Print H for Hare, T for tortoise
            cout << setw(*reptilePtr - *mammalPtr) << 'T';
        }
        else {
            cout << setw(*reptilePtr) << 'T';
            cout << setw(*mammalPtr - *reptilePtr) << 'H' << endl;
            cout << endl;
        }
    }
