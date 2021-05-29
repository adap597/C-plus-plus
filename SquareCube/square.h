//Used in Final Problem 5
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

//base class square
#ifndef SQUARE_H
#define SQUARE_H
using namespace std;
class square
{
protected:
    double side; //protected member variable for side
public:
    square() :side(1.0) //default value of side
    {
    }
    double calcVal()//calcuate area function definition
    {
        cout << "<<calVal in base class square is called>>" << endl;
        cout << "Enter the length of a side: " << endl;
        cin >> side;
        double area = side * side;//area is side length multiplied by side length
        return area; 
    }
};
#endif
