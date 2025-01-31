// Recursion is a programming concept where a function calls itself during it's execution.
# include <iostream>

using namespace std;

int factorial(int n){
    if( n== 0 || n== 1){
        return(1);
    }
    else if( n< 0){
        return(0);
    }
    else{
        return( n* factorial(n-1));
    }
}

int main(){
    int fact;
    cout<< "Enter the number:- "<< endl;
    cin>> fact;
    cout<< "The factorial for "<< fact<< " is "<< factorial(fact)<< endl;
    return 0;
}