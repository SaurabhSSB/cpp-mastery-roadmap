# include <iostream>
# include <string>
using namespace std;

class Entry{
    int serial_no;
    public:
        void set_serial_no(int s){
            serial_no= s;
        }
        void get_serial_no(){
            cout<<  "The serial number is "<< serial_no<< endl;
        }
};

class Library: virtual public Entry{
    protected:
        int index;
    public:
        void set_index(int t){
            index= t;
        }
        void get_index(){
            cout<< "The index is "<< index<< endl;
        }
};

class Register: virtual public Entry{
    protected:
        int registration_no;
    public:
        void set_registration_no(int u){
            registration_no= u;
        }
        void get_registration_no(){
            cout<< "The registration number is "<< registration_no<< endl;
        }
};

class Student: public Library, public Register{
    string index_registration;
    public:
        void set_index_registration(){
            index_registration= to_string( index)+ to_string( registration_no);
        }
        void display(){
            cout<< "Enrollment number is "<< index_registration<< endl;
            get_serial_no();    
            get_index();
            get_registration_no();
            
        }
};

int main(){
    Student ram;
    ram. set_serial_no(34);
    ram. set_index(27);
    ram. set_registration_no(44);
    ram. set_index_registration();
    ram. display();
    return 0;
}