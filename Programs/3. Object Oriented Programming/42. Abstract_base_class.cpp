# include<iostream>
using namespace std;

class A{
    protected:
        int num_1, num_2;
    public:
        A(int a, int b){
            num_1= a;
            num_2= b;
        }
        virtual void get_data()= 0; // pure virtual function
};

class B: public A{
    protected:
        string str_1;
        string str_2;
    public:
        B(int a, int b, string c, string d): A( a, b){
            str_1= c;
            str_2= d;
        }
        void get_data(){
            cout<< "The data of A is "<< num_1<< " and "<< num_2<< endl;
            cout<< "The data of B is "<< str_1<< " and "<< str_2<< endl;
        }
};

class C: public B{
    protected:
        bool bool_1;
        bool bool_2;
    public:
        C( int q, int r, string s, string t, bool u, bool v): B( q, r, s, t){
            bool_1= u;
            bool_2= v;
        }
        void get_data(){
            cout<< "The data of A is "<< num_1<< " and "<< num_2<< endl;
            cout<< "The data of B is "<< str_1<< " and "<< str_2<< endl;
            cout<< "The data of C is "<< bool_1<<" and "<< bool_2<< endl;
        }

}; 


int main(){
    C Aid( 5, 6, "saurabh", "singh", true, false);
    Aid.get_data();
    B Bread( 5, 6, "saurabh ", "singh");
    Bread.get_data();
    return 0;
}