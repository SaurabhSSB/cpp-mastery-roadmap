# include <iostream>

using namespace std;

int &return_by_reference(int &a, int&b){
    int temp= a;
    a= b;
    b= temp;
    return a;
}


int main(){
    int a= 27;
    int b= 36;
    return_by_reference( a, b)= 376;
    return 0;
}