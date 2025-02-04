# include <iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        Complex(int num1, int num2);
        void getData(){
            cout<< "The complex number is:- "<< a<< " + "<< b<< "i"<< endl;
        }
};

Complex::Complex(int num1, int num2){
    a= num1;
    b= num2;
} 

int main(){
    int x= 545;
    int y= 342;
    Complex Com_Num( 8, 12 );
    Com_Num.getData();
    return 0;
}