//Compiler assigns a default copy constructor to each Class.
# include <iostream>
using namespace std;

class Copy_{
    int a;
    int b;
    public:
        Copy_(){
            a= 0;
            b= 0;
        }
        Copy_(int num_1, int num_2){
            a= num_1;
            b= num_2;
        }
        Copy_(int num_1){
            a= num_1;
            b= 0;
        }
        void getData(){
            cout<< "This is the value of a "<< a<< ". This is the value of b "<< b<<"."<< endl;
        }
        Copy_(Copy_ &instance){
            cout<< "You have stepped into the boundary of copy constructor."<< endl;
            a= instance.a;
            b= instance.b;
            cout<< "You have cleared an uncharted territory. \nCongrats!"<< endl;
        }
};

int main(){
    Copy_ aa1, aa2, aa3, aa4;
    aa1. getData();
    aa2= Copy_( 12, 13);
    aa2. getData(); 
    aa3= Copy_( 15);
    aa3. getData();
    aa4= Copy_( aa2);
    aa4. getData();
    Copy_ aa5= aa4;
    return 0;
}