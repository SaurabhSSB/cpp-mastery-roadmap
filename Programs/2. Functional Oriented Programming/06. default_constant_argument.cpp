// default arguments should always be on the extreme right and the compulsary arguments should be on the left side.
// Constant Variable refers to a variable whose value cannot be changed once it has been initialized.
// used mostly for reference variable and pointers.
# include <iostream>

using namespace std;

void table( int a, int b= 10){
    for( int i= 0; i<= b; i++){
        cout<< a<< " * "<< i<< " = "<< a*i<< endl;
    }
}

int main(){
    int num;
    cout<< "Enter the number which you want table of:- "<< endl;
    cin>> num;
    const int number = 12;
    table( num); // default value of 10 used for b in the function table
    table( num, number); // value of b will be 12 now for the function table
    return 0;
}