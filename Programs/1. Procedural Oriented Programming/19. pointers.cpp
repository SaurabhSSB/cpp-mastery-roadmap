// A type of data that holds the address of other data types.
// &- Address of operator
// *- Dereference of opertor

#include <iostream>

using namespace std;
int main()
{
    int a = 326;
    int *x = &a;
    cout << x << endl;
    // * is also know as value at operator
    cout << *x << endl;

    int **ptp = &x; // Here ptp is a pointer to pointer variable i.e. a pointer that points at a variable
    cout << ptp << endl;
    cout << x << endl;
    cout << *ptp << endl;
    cout << **ptp << endl;
    return 0;
}