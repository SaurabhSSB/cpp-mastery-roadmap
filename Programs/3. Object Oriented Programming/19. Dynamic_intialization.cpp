# include <iostream>
using namespace std;

class Money{
    int principal;
    int year;
    float rate;
    int amount;
    public:
        Money(void){}
        Money( int num_1, int num_2, int num_3){
            principal= num_1;
            year= num_2;
            rate= float(num_3)/ 100;
            amount= principal;
            for( int i=0; i< year; i++){
                amount= amount* (1+ rate);
            }
        }
        Money( int num_1, int num_2, float num_3);
        void getData();
};
Money:: Money( int num_1, int num_2, float num_3){
    principal= num_1;
    year= num_2;
    rate= num_3;
    amount= principal;
    for( int i= 0; i< year; i++){
        amount= amount* (1+ rate);
    }
}
void Money:: getData(){
    cout<< "Amount at the bank is "<< amount<< endl;
}
        

int main(){
    Money M1, M2, M3;
    M1= Money(1000, 2, 5);
    M1.getData();
    M2= Money(1000, 2, 0.05f);
    M2.getData();
    M3= Money(1000, 4, 5);
    M3.getData();
    return 0;
}