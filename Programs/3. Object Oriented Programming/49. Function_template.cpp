# include<iostream>
using namespace std;

template< class A, class B>

void mela( A a, B b){
    A var_1= a;
    B var_2= b;
    cout<< "The value of the first variable is "<< var_1<< endl;
    cout<< "The value of the second variable is "<< var_2<< endl;
}

int main(){
    mela<int, float>( 27, 34.5);
    cout<< endl;

    mela<string, char>("really", 'R');
    cout<< endl;
    
    mela('S', "shera");
    cout<< endl;
    
    mela(17 + 23 , "reading");
    cout<< endl;
    
    return 0;
}