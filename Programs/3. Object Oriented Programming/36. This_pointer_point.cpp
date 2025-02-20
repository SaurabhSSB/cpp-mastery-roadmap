# include <iostream>
using namespace std;

class Null{
    int nullify;
    public:
        Null& setData(int nullify){
            this-> nullify= nullify;
            return *this;
        }
        void getData(){
            cout<< "The value of nullify is "<< nullify<< endl;
        }
};

int main(){
    Null Zero;
    Zero. setData(0).getData();
    return 0;
}