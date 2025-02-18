# include <iostream>
using namespace std;

class Base{
    int basic;
    public:
        Base(int m){
            basic= m;
            cout<< "This is the constructor of the base class."<< endl;
        }
        void get_basic(){
            cout<< "The value of the basic is "<< basic<< "."<< endl;
        }
};

class Boss{
    int bos;
    public:
        Boss(int n){
            bos= n;
            cout<< "This is the constructor of the boss class."<< endl;
        }
        void get_bos(){
            cout<< "The value of the bos is "<< bos<< "."<< endl;
        }
};

class Derive: public Base, public Boss{
    int derived;
    public: 
        Derive( int m, int n, int o): Base(m), Boss(n){
            derived= o;
            cout<< "This is the constructor of the derive class."<< endl;
        }
        void get_derived(){
            cout<< "The value of the derived is "<< derived<< "."<< endl;
            get_bos();
            get_basic();
        }
};

class Delux: public Boss, public Base{
    int deluxed;
    public: 
        Delux( int m, int n, int o): Boss(n), Base(m){
            deluxed= o;
            cout<< "This is the constructor of the delux class."<< endl;
        }
        void get_deluxed(){
            cout<< "The value of the deluxed is "<< deluxed<< "."<< endl;
            get_basic();
            get_bos();            
        }
};

int main(){
    Derive Dash( 12, 13, 16);
    Dash.get_derived();
    Delux Defense( 23, 36, 55);
    Defense.get_deluxed();
    return 0;
}