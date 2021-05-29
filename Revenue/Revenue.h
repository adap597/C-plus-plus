//Used in Comprehensive 3
//Class Revenue definition. Calculates revenue based on formula (demand * price).Values for demand and price are given in the 
//main function.

//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include<iostream>
#ifndef REVENUE_H
#define REVENUE_H

class Revenue {//define class

private://private members for demand and price
	int demand;
	double price;

public:
	Revenue(int d, double p) {	//constructor
	demand = d;
	price = p;
	}
double calculateRevenue() {//calculates revenue value
	double RevenueValue;
	RevenueValue = demand * price;//assigns demand * price value to RevenueValue 
	return RevenueValue;
}
int getDemand() {//gets demand value (given in main function)
	return demand;
}
double getPrice() {//gets price value (given in main function)
	return price;
}

};

#endif
