// Operators that help in formatting of program
// Ex- endl

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 24, b = 28, c = 57;
    cout << "The value of a: " << a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The value of c: " << c << endl;
    cout << "The value of a: " << setw(4) << a << endl;
    cout << "The value of b: " << setw(4) << b << endl;
    cout << "The value of c: " << setw(4) << c << endl;

    return 0;
}
