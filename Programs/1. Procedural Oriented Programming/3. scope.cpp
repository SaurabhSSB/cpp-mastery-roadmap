// Scope is the region in code where the variable is valid.
// local and global scope
// :: Scope resolution operator
#include <iostream>
using namespace std;

int x = 45;
void sum()
{
    cout << x << " ";
}

int main()
{
    int x = 27;
    x = 101;
    sum();
    cout << x << " ";
    cout << ::x << endl;
    return 0;
}