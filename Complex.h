//Class Complex definition. Performs addition and subtraction of complex numbers. The real parts of the complex
//number are added and subtracted. The imaginary parts of the complex number are added and subtracted. 

//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <sstream>

//prevent multiple inclusions of header
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex {// class definition
private:
	double real;//declaring private variables for real and imaginary parts of the complex number
	double imag;
public:
	Complex() { //default values 
		real = 1;
		imag = 1;
	}
	Complex(double r, double i) {//function prototype
		real = r;
		imag = i;
	}
	Complex add(Complex other){
		double tempReal = real + other.getReal();// adds the real parts of the complex number & stores result in tempReal
		double tempImag = imag + other.getImag();//adds imaginary parts of the complex number & stores result in tempImag
		return Complex(tempReal, tempImag); 
	}
	Complex subtract(Complex other){
		double tempReal = real - other.getReal();//subtracts real parts of the complex number & stores result in tempReal
		double tempImag = imag - other.getImag();//subtracts imaginary parts of the real number & stores result in tempImag
		return Complex(tempReal, tempImag);
	}
	
	string toString() {
		stringstream ss;
		ss << "(" << real << "," << imag << ")";// complex numbers display in this format (1,1)
		return ss.str();
	}
	double getReal()
	{
		return real;
	}

	double getImag()
	{
		return imag;
	}


}; // end class Complex

#endif 