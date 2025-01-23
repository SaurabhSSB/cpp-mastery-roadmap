# include <iostream>

using namespace std;

int sqr(int a);

int main(){
    int a;
    cout<<"Enter number to be squared: "<<endl;
    cin>>a;
    cout<<sqr(a)<<endl;
    return 0;
}

int sqr(int a){
    return(a*a);
}