// Call by reference using pointers
# include<iostream>

using namespace std;

void swap(int* a, int* b){
    int temp= *a;
    *a= *b;
    *b= temp;
}

int main(){
    int a= 5, b= 7;
    cout<< "value of a is "<< a<< " value of b is "<< b<<endl;
    swap( &a, &b);
    cout<< "value of a is "<< a<< " value of b is "<< b<<endl;
    return 0;
}