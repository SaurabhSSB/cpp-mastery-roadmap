# include <iostream>
using namespace std;

class Origin_2;

class Origin_1{
    int num_1;
    friend void swap( Origin_1 &, Origin_2 &);
    public:
        void set_num_1(int x){
            num_1= x;
        }
        void get_num_1(){
            cout<< "The value of origin_1 is "<< num_1<< endl;
        }
};

class Origin_2{
    int num_2;
    friend void swap( Origin_1 &, Origin_2 &);
    public:
        void set_num_2(int y){
            num_2= y;
        }
        void get_num_2(){
            cout<< "The value of origin_2 is "<< num_2<< endl;
        }
};

void swap( Origin_1 &s, Origin_2 &t){
    int temp= s. num_1;
    s.num_1 = t. num_2;
    t.num_2= temp;
    cout<< "Successfully Swapped!"<<endl;
}

int main(){
    Origin_1 Original_1;
    Original_1. set_num_1(25);
    Original_1. get_num_1();
    Origin_2 Original_2;
    Original_2. set_num_2(36);
    Original_2. get_num_2();
    swap( Original_1, Original_2);
    Original_1. get_num_1();
    Original_2. get_num_2();
    return 0;
}