// Private visibility mode means Public members become Private.
// Public visibility mode means Public members remain Public.
// Private members are not inherited.
# include <iostream>
using namespace std;

class Calci{
    int claculation;
    public:
        string str;
        Calci(){}
        Calci(string a){
            str= a;
        }
        void add( int a, int b){
            cout<< a+ b<< endl;
        }
        void sub( int a, int b){
            cout<< a- b<< endl;
        }
        void product( int a, int b){
            cout<< a* b<< endl;
        }
        void division( int a, int b){
            cout<< a/ b<< endl;
        }
};

class Mul: public Calci{
    public:
        void square( int x){
            product( x, x);
        };
};

int main(){
    int num_1;
    Mul squared;
    cout<< "Provide value for num_1"<< endl;
    cin>> num_1;
    squared. square( num_1);
    return 0;
}