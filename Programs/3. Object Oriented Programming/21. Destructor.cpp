# include <iostream>
using namespace std;

class Destro{
    int count= 0;
    public:
        Destro(){
            cout<< "The value of count is "<< ++count<< endl;
        }
        ~Destro(){
            cout<< "The value of count is "<< --count<< endl;
        }
};

int main(){
    cout<< "Constructor 1.0"<< endl;
    Destro Take;
    {
        cout<< "Constructor 2.0"<< endl;
        Destro Retake;
        cout<< "Destructor 1.0"<< endl;
    }
    cout<< "Destructor 2.0"<< endl;
    return 0;
}