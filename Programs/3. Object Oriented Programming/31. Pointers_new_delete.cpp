// the new keyword is used for dynamic memory allocation.
// delete is used for manual memory deallocation, which is necessary when you've used new to allocate memory on the heap.
# include<iostream>
using namespace std;

int main(){
    int a= 5;
    int* b= &a;
    cout<< "Address of a is "<< b<< "."<< endl<< "Value of a is "<< *b<< "."<< endl;
    int* new_ptr= new int( 20);
    cout<< "Address of new_ptr is "<< new_ptr<< "."<< endl<< "Value of new_ptr is "<< *new_ptr<< "."<< endl;
    int* new_array= new int[ 5];
    new_array[ 0]= 12;
    new_array[ 1]= 14;
    new_array[ 2]= 16;
    new_array[ 3]= 18;
    *(new_array+ 4)= 27;
    for( int i= 0; i< 5; i++){
        cout<< "The value of new_array[ "<<i<<"] is "<< new_array[i]<< "."<< endl;
    }
    delete[] new_array;
    cout<< new_array[0]<< "-> Garbage value because new_array is deleted"<< endl;
    return 0;
}