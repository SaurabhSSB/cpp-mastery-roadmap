#include <iostream>
#include <string>

using namespace std;

class Ara_obj {
    int a;
    string name;  

public:
    static int count;  // Declare static member here
    // Constructor to initialize the name
    Ara_obj(const string& obj_name) : name(obj_name) {
        count++;  
    }
    void setData(int num_1) {
        a = num_1;
    }
    
    void getData() const {  // Made const since it doesn't modify the object
        cout << "The value for object " << name << " is " << a << "." << endl;
    }
    void no_of_obj() const {  // Consider making this const if it doesn't modify the object
        cout << count;
    }
};

// Define and initialize static member outside the class
int Ara_obj::count = 0;

int main(){
    Ara_obj obj_1("obj_1"), obj_2("obj_2"), obj_3("obj_3");
    
    obj_1.setData(1);
    obj_2.setData(2);
    obj_3.setData(3);
    
    obj_1.getData();
    obj_2.getData();
    obj_3.getData();
    
    obj_3.no_of_obj();
    return 0;
}