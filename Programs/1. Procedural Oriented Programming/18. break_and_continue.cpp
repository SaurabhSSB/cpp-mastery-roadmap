#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i == 6)
        {
            i++;
            continue;
        }
        else if (i == 8)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}