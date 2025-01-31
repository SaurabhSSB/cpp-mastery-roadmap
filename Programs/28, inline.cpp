// the inline keyword is used to suggest to the compiler that a function's code should be inserted directly 
// into the calling code during compilation, rather than generating a separate function call. 
// only use when the function is small or the cache requirement will sore and affect the program execution. 
// do not use for loop, recursion, switch case and static variables.

/* The inline keyword is a request, not a command. The compiler may ignore it if:
- The function is too large.
- The function contains loops, recursion, or complex logic.*/

# include <iostream>

using namespace std;

inline int product ( int num2, int num1){
    return ( num1 * num2 );
}

int main(){
    int a= 27;
    int b= 29;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    cout<< product( a, b )<< endl;
    return 0;
}