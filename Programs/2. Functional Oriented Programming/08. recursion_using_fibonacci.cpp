# include <iostream>

int fibonacci(int n){
    if (n== 1|| n== 2){
        return(1);
    }
    else if(n < 0){
        return(0);
    }
    else{
        return( fibonacci(n- 1) + fibonacci (n- 2));
    }
}

using namespace std;
int main(){
    int fibo;
    cout<< "Enter the number:- "<< endl;
    cin>> fibo;
    cout<< fibo<< "th term of fibonacci series is "<< fibonacci(fibo);
    return 0;
}