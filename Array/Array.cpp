//Used in Assignment 5B
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"
using namespace std;

//default constructor for class Array 

template <class TP>

Array<TP>::Array(int arraySize)

{

    size = (arraySize > 0 ? static_cast<size_t>(arraySize) :

        throw invalid_argument("Array size must be greater than 0"));//throw invalid argument if Array is empty

    ptr = new TP[size];

}

template <class TP>

Array<TP>::Array(const Array<TP>& arrayToCopy)//copy Array

{

    size = arrayToCopy.size;

    ptr = new TP[size];

    for (size_t i{ 0 }; i < size; ++i)

    {

        ptr[i] = arrayToCopy.ptr[i]; 

    }

}

//destructor for class Array

template <class TP>

Array<TP>::~Array() {

    delete[] ptr; 

}

//return number of elements of Array

template <class TP>

size_t Array<TP>::getSize() const {

    return size; 

}

//overloaded assignment operator;

template <class TP>

const Array<TP>& Array<TP>::operator=(const Array& right) {

    if (&right != this)

    { //avoid self-assignment

         //for Arrays of different sizes, deallocate original left-side Array, then allocate new left-side Array

        if (size != right.size)

        {

            delete[] ptr; //release space

            size = right.size; //resize this object

            ptr = new TP[size]; //create space for Array copy

        }

        for (size_t i{ 0 }; i < size; ++i) {

            ptr[i] = right.ptr[i]; //copy array into object

        }

    }

    return *this; //enables x=y=z

}

//determine if two Arrays are equal and return true, otherwise return false

template <class TP>

bool Array<TP>::operator==(const Array<TP>& right) const {

    if (size != right.size)

    {

        return false; //arrays of different number of elements

    }

    for (size_t i{ 0 }; i < size; ++i)

    {

        if (ptr[i] != right.ptr[i])

        {

            return false; //Array contents are not equal

        }

    }

    return true; //Arrays are equal

}

//overloaded subscript operator for non-const Arrays;

//reference return creates a modifiable lvalue

template <class TP>

TP& Array<TP>::operator[](int subscript)

{

    //check for subscript out-of-range error

    if (subscript < 0 || subscript >= size)

    {

        throw out_of_range{ "Subscript out of range" };

    }

    return ptr[subscript]; //reference return

}

//overloaded subscript operator for const Arrays

//const reference return creates an rvalue

template <class TP>

TP Array<TP>::operator[](int subscript) const {

    //check for subscript out-of-range error

    if (subscript < 0 || subscript >= size)

    {

        throw out_of_range{ "Subscript out of range" };

    }

    return ptr[subscript]; //returns copy of this element

}

//overloaded input operator for class Array;

//inputs values for entire Array

template <class TP>

istream& operator>>(istream& input, Array<TP>& a) {

    for (size_t i = 0; i < a.size; ++i)

    {

        input >> a.ptr[i];

    }

    return input; //enables cin >> x >> y;

}

//overload output operator for class Array

template <class TP>

ostream& operator<<(ostream& output, const Array<TP>& a) {

    //output private ptr-based array

    for (size_t i = 0; i < a.size; ++i)

    {

        output << a.ptr[i] << " ";

    }

    output << endl;

    return output; //enables cout << x << y;

}
