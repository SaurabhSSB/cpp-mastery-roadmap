 # include<iostream>
 using namespace std;
 
 template < class T_1, class T_2>
 
 class Roll{
     T_1 raid;
     T_2 parade;
     public:
        Roll(T_1 a, T_2 b){
            raid= a;
            parade= b;
        }
        void display(){
            cout<< this-> raid<< " " << this-> parade<< endl;
            cout<< "The raid value is "<< raid<< endl;
            cout<< "The parade value is "<< parade<< endl;
        }
 };
 
 int main(){
     Roll< int, string> Swing( 10, "Saurabh Singh Bhandari");
     Swing.display();
     
     Roll< int, float> Real( 11, 10.01);
     Real.display();
     
     return 0;
     
 }