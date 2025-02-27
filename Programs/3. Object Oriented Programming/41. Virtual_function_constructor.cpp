# include <iostream>
using namespace std; 

class A{
    protected:
        int a;
        string s;
    public:
        A( int num_1, string str_1){
            a= num_1;
            s= str_1;
        }
        virtual void get_a(){
            cout<< "The value of number and string is "<< a<< "and"<< s<< endl;
        }
};

class B: public A{
    protected:
        int b;
        string s_2;
    public:
        B( int num_1, int num_2, string str_1, string str_2): A( num_1, str_1){
            b= num_2;
            s_2= str_2;
        }
        void get_b(){
            cout<< "The value of number in B and C is "<< a<< " "<< b<< endl;
            cout<< "The value of string in B and C is "<< s<< " "<< s_2<< endl;
        }
};

class C: public A{
    protected:
        int c; 
        string s_3;
    public:
        C(int num_1, int num_3, string str_1, string str_3): A( num_1, str_1){
            c= num_3;
            s_3= str_3;
        }
        void get_c(){
            cout<< "The value of number in A and C is "<< a<< " and "<< c<< "."<< endl;
            cout<< "The value of string is A and C is "<< s<< " and "<< s_3<< "."<< endl;
        }
};

int main(){
    int nm_1= 10;
    int nm_2= 15;
    int nm_3= 16;
    string st_1= "Saurabh";
    string st_2= "SaurabhSSB";
    string st_3= "Saurabh Singh Bhandari";
    C C_a( nm_1, nm_3, st_1, st_3);
    C_a. get_c();
    B B_a( nm_1, nm_2, st_1, st_2);
    B_a.get_b();
    return 0;
}