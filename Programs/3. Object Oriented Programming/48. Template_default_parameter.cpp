# include<iostream>
using namespace std;

template< class A= int, class B= float>
class X{
    public:
        A var_1;
        B var_2;
        X(A a, B b){
            var_1= a;
            var_2= b;
        }
        void getData(){
            cout<< "The value of the first variable is "<< var_1<< endl;
            cout<< "The value of the second variable is "<< var_2<< endl;
        }
};

int main(){
    X <> Cls_1(11, 12.1);
    Cls_1. getData();
    
    X<bool, string> Cls_2(false, "Relocation");
    Cls_2. getData();
    
    return 0;
}