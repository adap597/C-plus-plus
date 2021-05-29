/*Define a class called Revenue that has 2 private members of demand and price. 
Include a constructor and a public function that calculates the RevenueValue of the class.

RevenueValue = demand * price

Use public functions of the class in a program that computes RevenueValue and displays RevenueValue when demand is 2000 and price is 2.
 
Output should be displayed as the following: “The Revenue Value for the current income source with a price of xyz and a market value 
demand of demand-based-assessment is currently abc.”   
 
Where xyz is the price entered and demand-based-assessment is the current market value (in this case 2000), and finally abc as the Revenue Value.
*/

// Comprehensive 3.cpp : This program tests the Revenue class.
//
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


