// Comprehensive 3.cpp : This program tests the Revenue class.
//
//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include "Revenue.h"//include header file with Revenue class definition

using namespace std;

int main()
{
    Revenue r(2000, 2);//gives demand and price

    double RevenueValue;//calls function
    RevenueValue = r.calculateRevenue();
    //display results
    cout << "The Revenue value for the current income source with a price of " << r.getPrice() << " and a market value demand of " << r.getDemand() << " is currently " << RevenueValue << endl;

    return 0;

}


