# include<iostream>
using namespace std;

class Real{
    int a;
    int b;
    char c;
    string d;
    public:
        Real(int num_1, int num_2, string str_1);
        void setData(){
            cout<< "Enter the first character of your name:- ";
            cin>> c;
            // c= 'S';
            cout<< endl;
        }
        void getData(){
            cout<< "a "<< a<< endl;
            cout<< "b "<< b<< endl;
            cout<< "c "<< c<< endl;
            cout<< "d "<< d<< endl;
        }
};

Real:: Real(int num_1, int num_2, string str_1){
    a= num_1;
    b= num_2;
    d= str_1;
    cout<< "Value provided to the variables."<< endl;
}

int main(){
    int x, y;
    string z;
    cout<< "Enter the value in Order- Roll_No, Age, Name"<< endl;
    cin>> x>> y>> z;
    Real Ready= Real( x, y, z);
    Ready. setData();
    Ready. getData();
    return 0;
}