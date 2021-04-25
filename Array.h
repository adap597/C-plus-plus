//Name: Aurora DiPeso
//University ID: 0663597
//Thomas Edison State University
//C++ Programming (COS-213)
//Section no. OL009
//Semester and Year: 2020JAN

// Array class definition 

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <stdexcept>

template <class TP> //create template for class Array

class Array

{
    //declares overloaded stream insertion and extraction operators as friends of class
    template <class TP>

    friend std::ostream& operator<<(std::ostream&, const Array<TP>&);

    template <class TP>

    friend std::istream& operator>>(std::istream&, Array<TP>&);


public:

    explicit Array(int = 10);//default constructor with default size 10

    Array(const Array<TP>&);//copy constructor

    ~Array();//destructor

    size_t getSize() const;//return size

    const Array<TP>& operator=(const Array<TP>&);//assigment operator

    bool operator == (const Array<TP>&) const;//equality operator

    //inequality operator returns opposite of == operator
    bool operator!=(const Array<TP>& right) const {

        return !(*this == right);

    }

    TP& operator[](int);//returns lvalue

    TP operator[](int) const;//returns rvalue

private://private data members

    size_t size;//pointer based array size

    TP* ptr;//pointer to first element of array

};

#endif

