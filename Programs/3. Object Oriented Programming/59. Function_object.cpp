 # include <iostream>
# include <functional>
# include <algorithm>

using namespace std;

int main() {
    int arr[]= { 23, 25, 32, 11, 15};
    sort( arr, arr+ 5);
    for( int i= 0;i< 5;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    sort( arr, arr+ 5, greater<int>());
    for( int j=0;j< 5;j++){
        cout<< arr[j]<< " ";
    }
    return 0;
}