// An enum in C++ is a user-defined data type that consists of a set of named integral constants.
// Enums are used to assign names to integral values, making code more readable and maintainable.
#include <iostream>

using namespace std;
int main()
{
    enum study
    {
        maths,
        science,
        computer
    };
    cout << maths << endl;
    cout << science << endl;
    cout << computer << endl;
    study timing = maths;
    cout << timing << endl;
    return 0;
}