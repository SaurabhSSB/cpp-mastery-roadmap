// We use iostream for input and output.
// Stream means flow of bytes in a sequence.
// Input cin>> Extraction Operator
// Output cout<< Insertion Operator
// cpp reference for header files for info

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1/n";
    cin >> num1;
    cout << "/nEnter the value of num2/n";
    cin >> num2;

    cout << num1 << endl
         << num2 << endl;
    return 0;
}