//Used in Final Problem 5
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//derived class cube
#ifndef CUBE_H
#define CUBE_H
#include "square.h"
using namespace std;
class cube :public square
{
protected:
    double side;//protected member for side
public:
    cube() :side(1.0)//default value for side
    {
    }
    double calcVal() //calcuate volume of cube
    {
        cout << "<<calcVal in derived class cube is called>>" << endl;
        cout << "To calculate Volume of the Cube,\n" << endl;

        double volume = side * square::calcVal(); //volume is side length multiplied by area of the square
        //calculation calls square calcVal constructor to get the area
        return volume;
    }

};
#endif
