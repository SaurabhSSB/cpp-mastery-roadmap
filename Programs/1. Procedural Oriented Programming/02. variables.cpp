// -> used for comments part of program which is excluded during execution
/*
Multi-line comments
*/

// Variables are containers that store our data.
// Varibale name from 1 to 255
// Begins with _ and alphabet
// Contains only alphanumeric and _.
// No reserved word allowed.
// Data type tell us how the computer should interpret the value of the data.
// Three types:-
// Built-in:- int float char double bool
// User-defined:- Struct Union Enum
// Derived:- Array Function Pointer

// We can use 40.8f for float and 40.8l for long double by default is long double

#include <iostream>
using namespace std;

int main()
{
    int sum = 6;
    cout << sum << endl;
    int a = 4, b = 6;
    float x = 3.24;
    bool l = true;
    char c = 'r';
    string z = "Ram Shyam Hari";
    cout << "The value of c is " << c << endl;
    cout << a << b << endl;
    cout << c << endl;
    cout << "The value of x which is float type is " << x << endl;

    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    return 0;
}