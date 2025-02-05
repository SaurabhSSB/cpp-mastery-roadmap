// Class having multiple Constructors.
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
            cout<< endl;
        }
        Real( int num_1, int num_2){
            a= num_1;
            b= num_2;
            d= "Saurabh";
        }
        Real( int num_1){
            a= num_1;
            b= 0;
            d= "Saurabh";
        }
        Real(void){
            a= 10;
            b= 22;
            d= "Saurabh";
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
    int s, t;
    int u;
    string z;
    cout<< "Enter the value in Order- Roll_No, Age, Name"<< endl;
    cin>> x>> y>> z;
    Real Ready= Real( x, y, z);
    Ready. setData();
    Ready. getData();
    
    cout<< "Enter the value in order- Roll_no, Age"<< endl;
    cin>> s>> t;
    Real Steal( s, t);
    Steal.setData();
    Steal.getData();

    cout<< "Enter the value of Roll_no"<< endl;
    cin>> s;
    Real Deal( s);
    Deal. setData();
    Deal. getData();

    cout<< "This will be a default constructor"<< endl;
    Real Def;
    Def. setData();
    Def. getData();
    return 0;
}