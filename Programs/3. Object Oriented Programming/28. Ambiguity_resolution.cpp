# include <iostream>
using namespace std;

class Base_1{
    public:
        void rumour(){
            cout<< " Don't spread false rumour."<< endl;
        }
};

class Base_2{
    public:
        void rumour(){
            cout<< " Spreading false rumour is wrong."<<endl;    
        }
};

class derived_1: private Base_1, private Base_2{
    public:
        void rumour(){
            Base_1:: rumour();            
        }
};

int main(){
    Base_1 rumour_1;
    Base_2 rumour_2;
    derived_1 rumour_3;
    rumour_1. rumour();
    rumour_2. rumour();
    rumour_3. rumour();
    return 0;
}