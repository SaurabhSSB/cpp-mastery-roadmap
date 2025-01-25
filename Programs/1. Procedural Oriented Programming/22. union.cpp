// A union in C++ is a user-defined data type similar to a struct, but with one key difference:
// all members of a union share the same memory space.
#include <iostream>

using namespace std;

union lib
{
    int id;      // 4
    char symbol; // 1
    float fine;  // 4
    // struct would have used 9 bytes but union would use 4 bytes thus better memory management.
};

int main()
{
    union lib m1;
    m1.id = 11;
    cout << m1.id << endl;
    m1.symbol = 'N';
    cout << m1.symbol << endl;
    cout << m1.id << endl; // Here union will give garbage value because union only stores one value at a time.
    return 0;
}