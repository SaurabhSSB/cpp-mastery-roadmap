# include <iostream>
using namespace std;

class Money{
    int datum_1;
    int datum_2;
    public:
        Money(int a, int b= 27){
            datum_1= a;
            datum_2= b;
        }
        void getData(){
            cout<< "Overjoyed to have you here hope you have a wonderful experience:- "<< endl;
            cout<< "value of a "<< datum_1<< ", value of b "<< datum_2<< endl;
        }
        
};

int main(){
    Money Cash( 1, 7);
    Cash. getData();
    Money Inr( 11);
    Inr. getData();
    Money Dollar(17);
    Dollar. getData();
    return 0;
}