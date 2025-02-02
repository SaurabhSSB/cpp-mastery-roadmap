/*
Function Overloading in C++ is a feature that allows multiple functions with the same name to be defined, 
as long as these functions have different parameter lists (which can differ in the number, types, or order of parameters).
*/

# include <iostream>

using namespace std;

int mul_(int a,int b){
    return( a * b );
}

int mul_( int num1, int num2, int num3){
    return( num1 * num2 * num3 );
}

int main(){
    cout<< "product of two numbers using mul_ function "<< mul_( 11, 16)<< endl;
    cout<< "product of three numbers using mul_ function "<< mul_( 2, 6, 21)<< endl;

    return 0;
}