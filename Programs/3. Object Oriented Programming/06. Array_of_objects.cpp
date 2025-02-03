#include <iostream>
#include <string>

using namespace std;

class Ara_obj {
    int a;
    string name;  // Add this member to store the object's name
    
    public:
        // Constructor to initialize the name
        Ara_obj(const string& obj_name) : name(obj_name) {}

        void setData(int num_1) {
            a = num_1;
        }
        
        void getData() const {  // Made const since it doesn't modify the object
            cout << "The value for object " << name << " is " << a << "." << endl;
        }
};

int main(){
    Ara_obj obj_1("obj_1"), obj_2("obj_2"), obj_3("obj_3");
    
    obj_1.setData(1);
    obj_2.setData(2);
    obj_3.setData(3);
    
    obj_1.getData();
    obj_2.getData();
    obj_3.getData();
    
    return 0;
}