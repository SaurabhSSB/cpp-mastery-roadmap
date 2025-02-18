# include <iostream>
using namespace std;

class Complex{
    int Real;
    int Imaginary;
    public:
        void getData(){
            cout<< "The Real part is "<< Real<< endl;
            cout<< "The Imaginary part is "<< Imaginary<< endl;
            cout<< Real<<" + "<< Imaginary<< "i"<< endl<< endl;
        }
        void setData( int num_1,int num_2){
            Real= num_1;
            Imaginary= num_2;
        }
};

int main(){
    Complex *pointer= new Complex[ 4];
    pointer-> setData( 5, 8);
    pointer-> getData();
    
    (pointer+ 1)-> setData( 27, 18);
    (pointer+ 1)-> getData();

    (pointer+ 2)-> setData( 22, 11);
    (pointer+ 2)-> getData();
    
    (pointer+ 3)-> setData(27, 51);
    (pointer+ 3)-> getData();
    
    (pointer+ 4)-> setData(51, 82);
    (pointer+ 4)-> getData();
    return 0;
}