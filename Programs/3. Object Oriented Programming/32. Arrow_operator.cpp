# include <iostream>
using namespace std;

class Complex{
    int Real;
    int Imaginary;
    public:
        void getData(){
            cout<< "The Real part is "<< Real<< endl;
            cout<< "The Imaginary part is "<< Imaginary<< endl;
            cout<< Real<<" + "<< Imaginary<< "i"<< endl;
        }
        void setData( int num_1,int num_2){
            Real= num_1;
            Imaginary= num_2;
        }
};

int main(){
    Complex Num_one, Num_two;
    Num_one.setData( 5, 4);
    Num_one.getData();
    
    Complex *pointer_one= &Num_two;
    (*pointer_one).setData( 4, 50);
    (*pointer_one).getData();
    
    Complex *pointer_two= new Complex;
    pointer_two->setData( 8, 9); // Arrow Operator means dereference
    (*pointer_two).getData();
    return 0;
}