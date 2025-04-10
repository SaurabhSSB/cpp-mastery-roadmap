# include<iostream>
using namespace std;

template < class T>
class Merry{
    public:
        T christmas;
        Merry( T a){
            christmas= a;
        }
        void display();
};
template < class T>
void Merry<T>:: display(){
    cout<< "The value of Merry Christmas "<< christmas<< endl;
}

int main(){
    Merry <int> Ares( 12);
    Ares. display();
    Ares. christmas;
    return 0;
}