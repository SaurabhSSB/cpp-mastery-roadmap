# include <iostream>
using namespace std;

class Alone_2;

class Alone_1{
    int num_1;
    public:
        void set_num_1(int x){
            num_1= x;
        }
        int get_num_1(){
            return num_1;
        }
        void lone_striker( Alone_1 s, Alone_2 t);
};


class Alone_2{
    int num_2;
    public:
        friend class Alone_1;
        void set_num_2(int y){
            num_2= y;
        }
        int get_num_2(){
            return num_2;
        }
};

void Alone_1:: lone_striker( Alone_1 s, Alone_2 t){
    cout<<"Sum is "<< s.num_1+ t.num_2<< endl;
}

int main() {
    Alone_1 One;
    Alone_2 Two;
    One. set_num_1( 12);
    Two. set_num_2( 14);
    cout<< One.get_num_1()<< endl;
    cout<< Two.get_num_2()<< endl;
    One. lone_striker( One, Two);
    return 0;
}