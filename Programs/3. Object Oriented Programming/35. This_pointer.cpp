# include <iostream>
using namespace std;

class Null {
    int nullify;
    public:
        void setData(int nullify){
            this-> nullify= nullify;
        }
        void getData(){
            cout<< "The value of nullify is "<< nullify<< endl;
        }
};

int main() {
    Null Zero;
    Zero. setData(0);
    Zero. getData();
    return 0;
}