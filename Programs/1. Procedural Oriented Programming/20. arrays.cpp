// Contiguous Memory Allocation of similar type of items to form a collection
#include <iostream>

using namespace std;
int main()
{
    int arr[4] = {27, 32};
    int i = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    do
    {
        cout << arr[i] << endl;
        i++;
    } while (i <= 3);
    cout << arr << endl; // address of arr[0]
    return 0;
}