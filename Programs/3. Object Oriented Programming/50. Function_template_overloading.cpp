# include<iostream>
using namespace std;

void runner( int a){
    cout<<  "The winner gets prize."<< endl;
}

template<class A>
void runner( A a){
    cout<< "Winner is essential for entertainment."<< endl;
}

int main(){
    runner( 5);
    return 0;
}