# include<iostream>
using namespace std;

class B{
    public:
        int num_1;
        void set_num_1(int a){
            num_1= a;
        }
        void get_num(){
            cout<< "Value of number 1 is "<< num_1<< endl;
        }
};

class D: public B{
    public:
        int num_2;
        void set_num_2(int b){
            num_2= b;
        }
        void get_num(){
            cout<< "Value of number 1 is "<< num_1<< endl;
            cout<< "Value of number 2 is "<< num_2<< endl;
        }
};

int main(){
    B *p_b;
    B o_b;
    D o_d;
    p_b= &o_d; 
    p_b-> num_1= 27;
    p_b-> get_num();
    return 0;
}