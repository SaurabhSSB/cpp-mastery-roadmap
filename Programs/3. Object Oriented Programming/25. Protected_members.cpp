// Protected members can be inherited but will always remain protected i.e. cannot be accessed outside of class.
# include <iostream>
using namespace std;

class Read{
    protected:
        int index;
    public:
        Read(void);
        int book_no;
        void setData( int a, int b){
            index= a;
            book_no= b;
        }
        int getData_index(){
            return index;
        }
};

Read:: Read(){
    index= 24;
    book_no= 11;
}

class Lib: public Read{
    int entry;
    public:
        void text(){
            cout<< "Index no "<< index<< " is needed for "<<book_no<<" reading"<< endl; 
        }
};

int main(){
    Lib Mid;
    Mid. text();
    Mid. setData( 12, 27);
    Mid. text();
    return 0;
}